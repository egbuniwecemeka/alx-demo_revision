#include <stdio.h>
#include <canio.h>

/* 

User
what does getch() do in c

ChatGPT
getch() is a function in C that stands for "get character." It is commonly used to read a single character from the keyboard without echoing it to the screen. This function is often employed to capture user input in console-based applications where you want to take action based on individual key presses.*/

int main(void)
{
    char c;

    printf("Enter a character: \n");

    c = getchar();

    printf("Entered value: %c\n", c);

    return (0);
}