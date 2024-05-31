#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int arr[] = {5, 6, 7, 8, 9, 10, 15, 20};
	int *ptr1 = &arr[1];
	int *ptr2 = &arr[7];

	// Print numerical difference between pointers (data_type x diff)
	printf("Add ptr1: %d and ptr2: %d\n", ptr1, ptr2);
	printf("Subtract ptr2 from ptr1: %d\n", ptr2 - ptr1);

	return (0);
}
