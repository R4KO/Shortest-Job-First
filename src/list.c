//
// Created by thoma on 25/09/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "../include/list.h"
#include "../include/process.h"

node_list* new_node(struct process* p){
    node_list* l = malloc(sizeof(node_list));
    l->p = p;
    l->next = NULL;
    return l;
}

node_list* init_list(int n){
    if(!n) return NULL;
    process* p = malloc(sizeof(process));
    node_list* l = new_node(p);
    printf("Please enter the burst time of the process %d: ", n);
    scanf("%d", &(p->btime));
    p->id = n;
    l->next = init_list(n-1);
}

int length(node_list* l){
    if(!l) return 0;
    return 1 + length(l->next);
}

void print_list_rec(node_list* l) {
    if(l){
        printf("ID\tBurst Time\n");
        __print_list_rec(l);
    }
}

void __print_list_rec(node_list* l){
    if(l) {
        __print_list_rec(l->next);
        printProcess(l->p);
    }
}

void free_list(node_list** l){
    if(*l){
        free_list(&(*l)->next);
        free((*l)->p);
        (*l)->p = NULL;
        free(*l);
        *l = NULL;
    }
}

void bubbleSort(node_list* l){
    int swapped;
    node_list* tmp = NULL;
    node_list* current;
    if(!l) return;

    do{
        swapped = 0;
        current = l;

        while(current->next != tmp){
            if(current->p->btime > current->next->p->btime){
                swap(current, current->next);
                swapped = 1;
            }
            current = current->next;
        }
        tmp = current;
    }while(swapped);
}

void swap(node_list* a, node_list* b){
    process* tmp = a->p;
    a->p = b->p;
    b->p = tmp;
}