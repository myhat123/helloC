#include <stdlib.h>

#include "./node.h"

Node * InitStack(Node *top) {
    top = NULL;
    return top;
}

Node * Push(Node *top, DataType x) {
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = top;
    top = s;

    return top;
}

Node * Pop(Node *top, DataType *ptr) {
    Node *p = top;
    if (top == NULL) return NULL;
    *ptr = top->data;
    top = top->next;
    free(p);
    return top;
}

int GetTop(Node *top, DataType *ptr) {
    if (top == NULL) return 0;
    *ptr = top->data;
    return 1;
}