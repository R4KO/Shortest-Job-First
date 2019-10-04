//
// Created by thoma on 25/09/2019.
//

#include <stdio.h>
#include "../include/process.h"

void printProcess(process* p){
    printf("%d\t%d\n", p->id, p->btime);
}
