#!/usr/bin/python3

fruits = {'banana', 'mango', 'orange', 'apple', 'mango', 'orange'}
pineapple = 'pineapple' in fruits
first = set('Egbuniwe')
middle = set('Chukwuemeka')
last = set('Emmanuel')

# Sets also support set comprehension
non_set = {x for x in last if x not in 'Emma'}

# Formatting output
print(first)
print(fruits)
print(pineapple)
print(first - middle)
print(first | last)
print(first & middle)
print(first ^ last)
print(non_set)
