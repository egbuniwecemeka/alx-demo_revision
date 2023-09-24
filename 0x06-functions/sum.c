/**
 *  In formal parameters, local variables take precedence over global variables.
 *  The following example shows this
*/
//global variable
int x = 4
//Function prototype
int sum(int, int);

int main(void)
{
    int x = 1;
    int y = 2;
    int z;

    printf("Value of x in main: %d", x);

    z = sum(x, y);
    printf("Sum of x&y: %d", z);

    return (0);
}


int sum(int x, int y)
{
    printf("Value of x in sum(): %d", x);
    return x + y;
}