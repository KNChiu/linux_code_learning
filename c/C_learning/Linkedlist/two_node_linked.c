#include <stdio.h>
#include <cstdlib>

typedef struct Node {
    int data;
    struct Node *link;
}listPointer;

listPointer create2() {
    //listPointer *second;
    listPointer *first = (listPointer *)malloc(sizeof(listPointer));    
    listPointer *second = (listPointer *)malloc(sizeof(listPointer));
//    Malloc(first, sizeof(*first));
//    Malloc(second, sizeof(*second));
    second -> link = NULL;
    second -> data = 20;

    first -> data = 10;
    first -> link = second;
    return *first;
}

int main() {
    create2();
    return 0;
}

