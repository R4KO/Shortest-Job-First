#include <stdio.h>
#include <stdlib.h>
#include "include/list.h"
#include "include/process.h"

int main(){
    int n, len;

    // Input
    printf("Please enter the number of process: ");
    scanf("%d", &n);

    // Processing
    node_list* l = init_list(n);

    // Output
    print_list_rec(l);

    len = length(l);

    printf("Length: %d\n", len);

    bubbleSort(l);

    print_list_rec(l);

    free_list(&l);

    return 0;
}