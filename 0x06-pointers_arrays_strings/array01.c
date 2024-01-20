#include <stdio.h>

int main(void)
{
	int n[9];	/* array declaration */
	int i, j;

	/* array initialation of n to 0 */
	for (i = 0; i < 10; i++)
		n[i] = i + 100;	/* update element at location i to i + 100 */

	/* iterate through array and print it values */ 
	for (j = 0; j < i; j++)
		printf("Elements[%d]: %d\n", j, n[j]);

	return (0);
}
