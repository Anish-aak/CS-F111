#include "myheader.h"

int a[50][50], row, col;

int main()
{
    printf("Enter the number of rows: (<50)\n");
    scanf("%d", &row);
    printf("Enter the number of columns: (<50)\n");
    scanf("%d", &col);
    accept(a, row, col);

    printf("Transpose using function1:\n");
    function1(a, row, col);

    printf("Transpose using function2:\n");
    function2(a, row, col);
    return 0;
}
