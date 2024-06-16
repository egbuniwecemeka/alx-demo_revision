#!/usr/bin/python3

tup = 10, 20, 30, 40, 50

# Tuples may also be nested
nested = tup, (60, 70, 80,90)

# Tuples are immutable but can contain mutable object
vec = ([1, 2], [3, 4], [5, 6])

# Tuples woith no or one value are created differently.
tup_none = ()
tup_one = 'A', # Note the , 

# Print/Formatting output
print(tup[2])
print(tup)
print(nested)
print(vec)
print(tup_none)
print(tup_one)
