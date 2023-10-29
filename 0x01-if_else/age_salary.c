#include <stdio.h>

/**
 * use nested if loop to solve this problem 
 * write a program that categorizes the salary bracket of staff according to age
 * 
 * Return: 0 (On success)
*/

int main(void)
{
    int staff = true;
    int age = 25;
    int salary = 0;

    if (staff)
    {
        if (age < 25)
        {
            salary = 50000;
            printf("Salary 4 under 25 is %d\n", salary);
        }
        else if (age >= 25 && age <= 40)
        {
            salary = 100000;
             printf("Salary 4 uver 25 is %d\n", salary);
        }
        else
        {
            printf("Salary cap above limit\n");
        }
    }
    else
    {
        printf("Not a staff\n"); 
    }
    
    return (0);
}