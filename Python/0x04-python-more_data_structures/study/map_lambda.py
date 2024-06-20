#!/usr/in/python3

"""
    r = map(func, seq)
    first argument -> A functin
    second argument -> A list or tuple (sequence)
"""


temperature = (36, 36.5, 37, 38, 39)

def fahrenheit(T):
    return ((float(9)/5) * T + 32)

def celsius(T):
    return (float(5)/9) * (T - 32)
# Before python3 map() returned a list ut with python 3, it returns an iterator
F = list(map(fahrenheit, temperature))
C = list(map(celsius, F))

print(F)
print(C)

# The above can be writen as
# Usage of lambda function in map()
Cel = (45, 50)
Fah = list(map(lambda x: (float(9)/5) * x + 32, Cel))
formatted_fah = [f"{temp:.2f}" for temp in Fah]
print(formatted_fah)

Fahren = (45, 50)
cels = list(map(lambda x: (float(5)/9) * (x - 32), Fahren))
formatted_cels = [f"{temp:.2f}" for temp in cels]
print(formatted_cels)

# lambda can be used on more than one list
# list of equal size
a = [2, 5, 8]
b = [3, 6, 9]
c = [-1, 0, -2]
equation = list(map(lambda x, y, z: x + 5*y - z, a, b, c))
print(equation)

# When lists are of different sizes, mapstops on consuming the shortest list
# returns a list of 3 values, which corresponds with the shortest list
d = [10, 20, 30]
e = [40, 50, 60, 70]
f = [80, 90, 100, 110]
ages = list(map(lambda x, y, z: x+y+z, d, e, f))
print(ages)
