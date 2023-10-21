#include <stdio.h>
/**
 * the process of removing elements from a queue - dequeue
 */

#define size 3

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
        printf("%d", rear)
    }
}

void dequeue()
{
    if (front === rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d", arr[front]);
        front++;
    }
}

int main(void)
{
    enqueue(39);
    enqueue(36);
    enqueue(33);
    enqueue(36);

    return (0);
}