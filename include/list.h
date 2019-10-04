//
// Created by thoma on 25/09/2019.
//

#ifndef SJF_LIST_H
#define SJF_LIST_H

typedef struct list{
    struct process* p;
    struct list* next;
}node_list;

node_list* new_node(struct process* p);

node_list* init_list(int n);

int length(node_list* l);

void print_list_rec(node_list* l);

void __print_list_rec(node_list* l);

void free_list(node_list** l);

void bubbleSort(node_list* l);

void swap(node_list* a, node_list* b);

#endif //SJF_LIST_H
