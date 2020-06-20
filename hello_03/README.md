多个文件编译
==========

gcc -o hello hello_03.c add.c

独立文件编译
==========

gcc -c hello_03.c 
gcc -c add.c

gcc -o hello hello_03.o add.o