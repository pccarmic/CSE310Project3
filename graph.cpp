#include "graph.h"

void insertTable(table* adjTable, int tableIndex, vertex* inputVert){
    table head = adjTable[tableIndex];
    table newNode;

    if(head.next == nullptr){
        cout << "test1: " << endl;
        newNode.vert = inputVert;
        adjTable[tableIndex] = newNode;
        cout << "test2: " << endl;
    }else{
        cout << "test3: " << endl;
        newNode.vert = inputVert;
        newNode.next = head.next;
        adjTable[tableIndex] = newNode;
        cout << "test4: " << endl;
    }

    vertex* vert = adjTable->vert;
    int v = vert->v;
    int w = vert->w;

    cout << "Stored Data: " << v << " :: " << w << endl;

}

/*
void printTable(table* adjTable, int numVert){
    int i = 0;
    while(i < numVert) {

        vertex* vert = adjTable->vert;
        int v = vert->v;
        int w = vert->w;

        cout << "List " << i << ": " << v << " :: " << w << endl;
    }
}*/
