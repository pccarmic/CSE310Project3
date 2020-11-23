//
// Created by The Great PC on 11/17/2020.
//

#ifndef PROJECT3_UTIL_H
#define PROJECT3_UTIL_H

#include <iostream>
#include <string>

using namespace std;

struct vertex{
    int v;
    int w;
};

struct table{
    vertex* vert;
    table* next;
};

struct minHeap{
    vertex* vert;
    minHeap* left;
    minHeap* right;
};



void INSERT(table* adjTable, minHeap* minPrio, int tableIndex, vertex* inputVert);

#endif //PROJECT3_UTIL_H
