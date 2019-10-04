//
// Created by thoma on 25/09/2019.
//

#ifndef SJF_PROCESS_H
#define SJF_PROCESS_H

typedef struct process{
    int id; // ID of the process
    int btime; // Burst Time
}process;

void printProcess(process* p);

#endif //SJF_PROCESS_H
