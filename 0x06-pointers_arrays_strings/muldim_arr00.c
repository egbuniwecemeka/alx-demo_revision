#include <stdio.h>

/* Betty doc ...*/

int main(void)
{
	/* multi-array declaration */
	int n[3][2] = {
		{0, 2},
		{4, 6},
		{8, 10}
	};

	int i, j;
	/* Use a nested loop to iterate through rows and colums and print their values */
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("Element[%d][%d] = %d\n", i, j, n[i][j]);
	}
}
