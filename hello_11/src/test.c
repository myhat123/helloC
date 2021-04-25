#include <stdio.h>
#include <stdlib.h>

#include "./node.h"

int main() {
    Node *top = NULL;
    DataType x;

    top = InitStack(top);

    top = Push(top, 22);
    top = Push(top, 15);
    
    GetTop(top, &x);

    printf("%d\n", x);

    top = Pop(top, &x);

    printf("%d\n", x);

    GetTop(top, &x);

    printf("%d\n", x);

    return 0;
}