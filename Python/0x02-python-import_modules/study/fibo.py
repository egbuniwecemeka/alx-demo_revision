#!/usr/bin/python3

def fibo(n):
    a, b = 0, 1
    while a < n:
        print(f"{a}", end=' ')
        a, b = b, a+b
    print()

def fibo2(n):
    result = []
    a, b = 0, 1
    while a < n:
        result.append(a)
        a, b = b, a+b
    return result

if __name__ == "__main__":
    import sys
    fibo2(sys.argv[1])
