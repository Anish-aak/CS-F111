#include <stdio.h>

int main()
{
    float u, t, a, d;
    printf("Enter the initial speed, acceleration and time taken:\n");
    scanf("%f %f %f", &u, &a, &t);
    float temp1 = u*t, temp2 = (a*t*t)/2;
    d = temp1 + temp2;
    printf("The total distance travelled is %f", d);
    return 0;
}