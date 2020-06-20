编译
====

const double pi = 4.0 * atan(1.0);

使用atan数学库中的函数，所以 #include <math.h>，声明外部函数

gcc -o circle -lm circle.c circulararea.c

或

gcc -c circle.c
gcc -c circulararea.c
gcc -o circle circle.o circulararea.o -lm

链接
====

参考资料：c语言核心技术， P511页

标准链接库的大部分内容一般放在libc.a或者放在动态链接的共享版本libc.so中，/lib 或 /usr/lib

ubuntu中的位置: /usr/lib/x86_64-linux-gnu/libc.a

自动在标准链接库目录中搜索文件，如/usr/lib

gcc -o circle -lm circle.c circulararea.c

有三种方式：

一、指定链接库的完整路径和文件名

gcc -o circle circle.c circulararea.c /usr/lib/x86_64-linux-gnu/libm.a

二、使用 -L 选项，增加搜索链接库的目录

gcc -o circle -L/usr/lib/x86_64-linux-gnu -lm circle.c circulararea.c

三、把目录加到 LIBRARY_PATH 环境变量中，借助 -Wl 选项 (后续再理解)

gcc -lm -Wl,-M circle.c circulararea.c > circle.map

动态链接库
========

gcc -c circulararea.c
gcc -shared -o libcirculararea.so circulararea.o

gcc -c circle.c
gcc -o circle circle.o libcirculararea.so -lm

运行

设置环境变量

```sh
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
$ ./circle
```

静态链接
=======

gcc -static -o circle circle.o circulararea.o -lm

这样编译出来的文件尺寸比较大
