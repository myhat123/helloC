#include <stdio.h>

//函数声明
int add(int x, int y);

int main() {
    printf("sum: %d\n", add(2, 3));

    return 0;
}

int add(int x, int y) {
    return x+y;
}