#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if(num>=0)
    {
        for(int i = num; i<=2*num; i++)
        {
            sum += i;
        }
    }
    else
    {
        for(int i = 2*num; i>=3*num; i--)
        {
            sum += i;
        }
    }
    printf("The required sum is: %d", sum);
    return 0;
}