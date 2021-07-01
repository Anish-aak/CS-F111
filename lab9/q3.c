#include<stdio.h>
#include<stdlib.h>

int main(int argv, char *args[])
{
	int *intar, n1 = atoi(args[1]), n2 = atoi(args[2]);
	float *floatar;

	struct array 
	{
		int *ar1;
		float *ar2;
	} dynar;

	intar = malloc(sizeof(int)*n1);		//Setting size of integer array according to command line argument
	floatar = malloc(sizeof(float)*n2); //Setting size of float array according to command line argument

	printf("Enter the elements of the 1st array\n");
	for(int i=0; i<n1; i++)
		scanf("%d", intar+i);

	printf("Enter the elements of the 2nd array\n");
	for(int i=0; i<n2; i++)
		scanf("%f", floatar+i);

	dynar.ar1 = intar;			//Assigning the address stored in intar to dynar.ar1 (which is an integer pointer)
	dynar.ar2 = floatar;		//Assigning the address stored in intar to dynar.ar1 (which is an integer pointer)

	printf("The newly formed dynamic array is:\n");

	for(int i=0;i<n1;i++)
		printf("%d ", dynar.ar1[i]);

	printf("\n");

	for(int i=0;i<n2;i++)
		printf("%0.2f ", dynar.ar2[i]);
}