/* A simple function that returns the max of two integers */
#include <stdio.h>

/* Function declaration */
int max(int, int);

/* Entry point */
int main(void)
{
    int ret;
    int a = 5;
    int b = 10;

    ret = max(a, b);    //Function calling and stored in ret

    printf("Max vaalue is %d", ret);

    return (0);
}

/* Function definition */
int max(int a, int b)
{

    int result;

    if (num1 > num2)
        result = num1;
    else
    {
        result = num2;
    }
    
    return (result);
}



