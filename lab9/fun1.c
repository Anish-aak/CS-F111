#include "header.h"

void fun1(int argc ,char * argv[])
{
	ptr = (int **) malloc (m*sizeof(int *));
	m = atoi(argv[1]);
	int * ptr1 = (int *) malloc (m*sizeof(int));

	for (int i = 0; i < m; i++)
	{
		ptr1[i] = atoi(argv[i+2]);
		pos[i] = ptr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		ptr[i] = (int *) malloc (ptr1[i]*sizeof(int));
	}
	printf("Please enter all the elements of the array\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < ptr1[i]; j++)
		{
			scanf("%d", &ptr[i][j]);
		}
	}
	fun2 (ptr, ptr1);
}