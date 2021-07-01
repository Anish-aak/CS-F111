#include "header.h"
void fun2(int ** ptr, int * ptr1)
{
	int temp = 0;
	for (int i = 0; i < m; i++)
	{
	    for (int j = 0; j < ptr1[i]; j ++)
	    {
	    	for (int k = 0; k < ptr1[i] - j - 1; k ++)
	    	{
	    		if (ptr[i][k] > ptr[i][k+1])
	    		{
	    			temp = ptr[i][k];
	    			ptr[i][k] = ptr[i][k+1];
	    			ptr[i][k+1] = temp;
	    		}
	    	}
	    }
	}
	printf("Printing the elements of the array...\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < ptr1[i]; j++)
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	int *temp2, t;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m - i - 1; j++)
		{	
			if (ptr[j][0]>ptr[j+1][0])
			{
				 temp2 = ptr[j];
				 ptr[j] = ptr[j+1];
				 ptr[j+1] = temp2;
				 t = pos[j+1];
				 pos[j+1] = pos[j];
				 pos[j] = t;
			}
		} 
	}
}
