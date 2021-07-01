#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);                           //Taking the two numbers as input from the user
    a += b;                                           //Re-assign a to hold the sum of a and b
    b = a - b;                                        //Re-assign b to hold the difference between the sum and b (the diffence is the original value of a)
    a -= b;                                           //Re-assign a to hold the difference between the sum and b (b now holds the original value of a, so the difference is original value of)
    printf("The swapped numbers are: %d %d", a, b);   //Printing the swapped values of a and b
    return 0;
}