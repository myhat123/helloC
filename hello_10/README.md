单一的源代码目录
=============

参考redis源码，src目录中均是*.c文件，不再分离单独的目录，编译后的*.o也放在相同目录中

Makefile也进行调整

OBJS = $(patsubst %.c, %.o, $(wildcard *.c))

patsubst和wildcard
==================

https://zhuanlan.zhihu.com/p/149346441