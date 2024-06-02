#include <stdio.h>


/**
 * stack_obs - function call has its own set of parameters and local variables
 * each recursive call creates a stack frame
 * @n: memory to be allocated
 *
 * Return: Success 1, or 
 */
int stack_obs(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * stack_obs(n - 1));
	}
}
