#include<stdio.h>
//FUnction declaration with no return type/argument
void sum();
void mul(void);
void divide(void);
void subtract(void);

int main(void) {
    sum();
    mul();
    divide();
    subtract();
}

//FUnction definitions with no return type/argument
void sum(void)
{
    int a = 5, b =10, sum = 0;
    sum = a + b;
    printf("sum = %d\n", sum);
}

void mul()
{
    int a = 5, b =10, mul = 0;
    mul = a * b;
    printf("mul = %d\n", mul);
}

void divide()
{
    int a = 5, b =10, div = 0;
    div = a / b;
    printf("divide = %d\n", div);
}

void subtract()
{
    int a = 5, b =10, sub = 0;
    sub = a - b;
    printf("subtract = %d\n", sub);
}