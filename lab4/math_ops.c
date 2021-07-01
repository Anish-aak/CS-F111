#include <stdio.h>
#include <math.h>
#define pi 3.142

int main()
{
    float x, y;
    printf("Enter the values of x and y: ");
    scanf("%f %f", &x, &y); //Taking the two numbers as input from the user
    float ex1 = ((exp(x)*sin(pi/3))+(5.6*pow(10, -5)))/(3*cos(pi/6)); //Implementation of expression 1
    float ex2 = sin((atan(0.33)+pi)/(2*y));                           //Implementation of expression 2
    printf("The output of expr1 and expr2 are: %f %f", ex1, ex2); //Printing the values obtained
    return 0;
}