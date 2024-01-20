#include <stdio.h>

/* Betty doc */

/* There are 3 ways this can be done for either single or multi-dimensional arrays. These are 
 * 1. a formal parameter pointer
 * 2. a formal parameter as sized array and
 * 3. A formal parameter as unsized array
 *
 * Note: the formal parameter returns an interger pointer to the array.
 */
int getAverage(int arr[], int size);

int main()
{
	int height[7] = {2, 8, 10, 2, 4, 4, 6};
	double avg;

	avg = getAverage(height, 5);

	printf("The average value is %f\n", avg);

	return (0);
}

int getAverage(int arr[], int size)
{
	int i;
	double avg;
	double sum = 0;

	for (i = 0; i < size; ++i)
		sum += arr[i];

	avg = sum / size;

	return avg;
}

/* As you can see, the length of the array doesn't matter as far as the function is concerned 
 * because C performs no bounds checking for formal parameters.*/
