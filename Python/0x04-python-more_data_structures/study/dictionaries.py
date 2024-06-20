import math#!/usr/bin/python3


# Dictionaries and basic operations
profile = {'name': "Emma", 'age': 29}
profile['sex'] = 'male'
profile['sport'] = 'football'
profile['job'] = 'Inventory'
del profile['job']
keys = list(profile)
sort = sorted(profile)
name_found = 'name' in profile
sport_found = 'tennis' not in profile

# dict() constructors with sequenced tupled key: value pairs can be used to create dictionaries
job = dict([('alx', 'Software Engineer'), ('FC', 'Warehouse Officer'), ('ejfarms', 'CEO')])


# List comprehension
num_square = {x: x**2 for x in range(20)}

# Keyword arguments
ages = dict(john=50, emma=29, loay=21)

# Looping Techniques
# Key and value pairs can be gotten from a dictionary at the same time using items() method
friend = {'name': "Toba", 'age': 24}
for k, v in friend.items():
    print(k, v)

# When looping through a sequencee, The position (index) and corresponding val can be gotten a the same time using enumerate
game = ['tic', 'tac', 'toe']
for i, v in enumerate(game):
    print(i, v)


# To over two or more sequences at the same time, they can be paired with zip()
names = ['James', 'Henry', 'Francis']
for k, v in zip(names, game):
    print(f"{k} got {v}")

for i in reversed(range(8)):
    print(f"{i}", end=' ')
print()

for i in sorted(names):
    print(f"{i}", end=' ')
print()


# set() and sorted() provide a unique looping strategy for elements in the sequemce
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for i in sorted(set(basket)):
    print(f"{i}", end=' ')
print()


# Sometimes it may be tempting to modify a list while looping over it, however it is simpler and safe to create an new list instead
raw_data = [56.2, float('NaN'), 51.7, 55.3, 52.5, float('NaN'), 47.8]
filtered_data = []
for i in raw_data:
    if not math.isnan(i):
        filtered_data.append(i)
print(filtered_data)


# Formatting output
print(profile)
print(keys)
print(sort)
print(name_found)
print(sport_found)
print(profile)
print(job)
print(num_square)
print(ages)

