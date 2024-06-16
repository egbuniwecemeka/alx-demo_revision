#!/usr/bin/python3

# List comprehenion 
multiple_2 = []

for i in range(50):
    multiple_2.append(i**2)

print(multiple_2)

# Alternatively
cubes = list(map(lambda x: x**3, range(20)))
print(cubes)

cubes1 = [i**3 for i in range(30)]
print(cubes1)

# A list comprehension consist of square brackets, for staement, if statement
# and finally returns the resul of the oprations, iterables and conditions
longitude = [1, 2, 3]
latitude = [4, 5, 6]
point = [(x, y) for x in longitude for y in latitude if x != y]
print(point)

# The above code is equivalent to
point1 = []
for i in longitude:
    for j in latitude:
        if i != j:
            point1.append([i, j])
print(point1)

# Tsks
vec = [-4, -2, 0, 2, 4]
names = [' Aang', '   Naruto', ' Sakura', '   Sasuke']

# Print double of the values
double = [i*2 for i in vec]
print(double)

# Filter to remove negative numbers
positive = [p for p in vec if p >= 0]
print(positive)

# Apply a function to all list elements
ascii_val = [ascii(asc) for asc in vec]
abs_val = [abs(pos) for pos in vec]
print(ascii_val)
print(abs_val)

# Apply a method to list
strip = [c.strip() for c in names]
print(strip)

# Create a list of tuple (location)
# Note that the tuple value has to be in parenthesis, else SyntaxError
loc = [(x, x*2) for x in range(10)]
print(loc)


# Flaten a list using listcomp and two for's
nested = [[0, 1, 2], [3, 4, 5], [6, 7, 8]]
unnest = [value for index in nested for value in index]
print(unnest)

# Nested list comprehension
unnested_list_comp = [[row[i] for row in nested] for i in range(3)]
print(unnested_list_comp)

# use of equivalent built-in function as operation above
zipped = list(zip(*nested))
print(zipped)


# del can remove slices and indexed-value. 
# They can also remove entire lists eg 'del vec'
del nested[0]
del vec[0:2]
print(f"Nested val: {nested}, vec: {vec}")

