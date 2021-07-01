#include "myheader.h"

void function2(int (*a)[50], int row, int col)
{
    int transpose[50][50];
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            transpose[j][i] = *(*(a+i)+j);
        }
    }
    display(transpose, row, col);
}
