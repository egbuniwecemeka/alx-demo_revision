#include <stdio.h>
#define size 3

/* The process of inserting elements in a queue is called enqueue */

int arr[size];

int front = 0;
int rear = 0;

void enqueue(int val)
{
    if (rear == size)
    {
        printf("Queue is full\n");
    }
    else
    {
        arr[rear] = val;
        rear++;
        printf(" %d ", rear);
    }
}

int main(void)
{
    enqueue(5);
    enqueue(10);
    enqueue(15);

    return (0);
}