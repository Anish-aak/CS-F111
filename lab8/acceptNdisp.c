#include "myheader.h"

void accept(int a[50][50], int row, int col)
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &a[i][j]);
}

void display(int a[50][50], int row, int col)
{
    for (int i = 0; i < col; i++) 
    {
        for (int j = 0; j < row; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}