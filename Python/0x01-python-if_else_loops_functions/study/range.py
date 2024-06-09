#!/usr/bin/python3

""" The range() Function """

# Iterate from default index. Note given end point never part of generated sequence
print(list(range(5)))

# The range can start feom any position of index to desired end point
print(list(range(5, 10)))

# Increment can be used on range - This is know as step. could be negative or positive
print(list(range(2, 20, 5)))


# range and len() - iterates over the indices of the sequence
jd = ["Software", "Engineer"]
for i in range(len(jd)):
    print(i, jd[i])

# range returns an iterable(suitable for functions and constructs) object
# Example of function that takes an iterable
print(sum(range(8, 12)))
