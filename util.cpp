#include "util.h"
#include "graph.h"
#include "heap.h"

void INSERT(table* adjTable, minHeap* minPrio, int tableIndex,  vertex* inputVert){
    insertTable(adjTable, tableIndex, inputVert);
    insertHeap(minPrio, inputVert);
}