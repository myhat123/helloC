分离header文件
=============

#include "my.h"

默认在当前目录下寻找， 找不到则会到系统的include路径下搜索，my.h可以带路径，到指定的目录中寻找

编译
====

gcc -o circle -lm circle.c circulararea.c

或

gcc -c circle.c
gcc -c circulararea.c
gcc -o circle circle.o circulararea.o -lm
