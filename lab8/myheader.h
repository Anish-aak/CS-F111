#ifndef MYHEADER_H_
#define MYHEADER_H_

#include<stdio.h>

void accept(int a[50][50], int row, int col);
void function1(int a[50][50], int row, int col); 
void function2(int (*a)[50], int row, int col);
void display(int a[50][50], int row, int col);

#endif