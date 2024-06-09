#!/usr/bin/python3

def fib(n):
    """ Prints fibonacci numbers up to n """
    a, b = 0, 1
    while a < n:
        print(a, end=' ')
        a, b = b, a + b
    print()
