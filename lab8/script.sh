#!/bin/bash
gcc -c main.c
gcc -c acceptNdisp.c
gcc -c func1.c
gcc -c func2.c
gcc -o final main.o acceptNdisp.o func1.o func2.o
rm *.o 
./final