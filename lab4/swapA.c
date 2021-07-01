#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);                         //Taking the two numbers as input from the user
    int temp = a;                                   //Defined integer variable "temp" to temporarily store one variable
    a = b;
    b = temp;
    printf("The swapped numbers are: %d %d", a, b); //Printing the swapped values of a and b
    return 0;
}