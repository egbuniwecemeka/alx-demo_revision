#!/usr/bin/python3

"""
    Code that modifies a collection while iterating over it is tricky
    Apply these two strategies
"""
users = {'Sarah': 'paid', 'Ayo': 'request', 'Paul': 'bonus', 'xyz': 'inactive'}

# Strategy 1 - Create a copy to iterate over
for user, status in users.copy().items():
    if status == 'inactive':
        del users[user]

# Strategy 2 - create a new collection
active_usr = []
for user, status in users.items():
    if status != 'inactive':
        active_usr = status
        print(f"{active_usr}", end='\n')
