#include <stdio.h>  //header file

int findMax(double arr[], int size);    //Function prototype

int main(void)  //Entry point 
{
    double numbers[] = {3, 4, 5, 9, 15};    //Creates array of numbers
    int size = sizeof(numbers) / sizeof(numbers[0]);    //total size of array by single size of element. To get value of size

    int max = findMax(numbers, size);   //Calls findMax function with numbers & size as arguments.Stores return value in max variable

    printf("The larger number is %d\n", max);   //Print max value

    return 0;   //Success(Exit point)
}

int findMax(double arr[], int size) //Function definition
{
    //First checks if array size is less than 0. If yes prints an error message.
    if (size <= 0)
    {
        printf("Enter a number greater than 0\n");
        return 0;
    }

    int max = arr[0];   //Initiates max variable with first element of array.

    for (i = 1; i < size; i++)  //Iterates array, starting from second point
    {
        if (arr[i] > max)   //if current element is greater than current maximum?
        {
            max = arr[i];   //Update maximum
        }

        return max; //returns max value found
    }
}