rm *.o
rm exe
gcc -c fun1.c
gcc -c fun2.c
gcc -c mainfunc.c
gcc -o exe fun1.o fun2.o mainfunc.o
gcc -c instruct.c
gcc -o ist instruct.o
./ist