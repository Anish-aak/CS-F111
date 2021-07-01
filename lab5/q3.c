#include <stdio.h>

int main()
{
    int a, b, c, d, sum;
    printf("Enter the four numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int x = a, y = b;
    if(b>a)
    {
        x = b;
        y = a;
    }
    if(c>x)
    {
        y = x;
        x = c;
    }
    else if(c>y)
    {
        y = c;
    }
    if(d>x)
    {
        y = x;
        x = d;
    }
    else if(d>y)
    {
        y = d;
    }
    sum = x + y;
    printf("The pair with the largest sum along with its sum:\n%d + %d = %d", fir, sec, sum);
    return 0;
}