#include "header.h"
int main(int argc, char* argv[])
{
	fun1(argc, argv);
	printf("Printing the elements of the array...\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < pos[i]; j++)
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	free (ptr);
	return 0;
}