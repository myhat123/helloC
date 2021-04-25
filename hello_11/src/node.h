typedef int DataType;

typedef struct Node {
    DataType data;
    struct Node *next;
} Node;

Node * InitStack(Node *top);
Node * Push(Node *top, DataType x);
int GetTop(Node *top, DataType *ptr);
Node * Pop(Node *top, DataType *ptr);