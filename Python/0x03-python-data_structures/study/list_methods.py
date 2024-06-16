#!/usr/bin/python3

euro24 = ["Germany", "Spain", "Portugal", "France", "England"]

append = euro24.append("Italy")
count = euro24.count("Germany")
copy = euro24.copy()
pop = euro24.pop(3)
reverse = euro24.reverse()
index = euro24.index("Portugal")
sort = euro24.sort()

""" 
    Notice that some methods return the value None. This is a design in principle for all mutable data structures in Python
"""
print(append)
print(f"Favourites_count: {count}, Portugal_index: {index}")
print(copy)
print(pop)
print(sort)
