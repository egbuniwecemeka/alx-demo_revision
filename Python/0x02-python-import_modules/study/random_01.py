#!/usr/bin/python3

import random

choice = random.choice(["hello", "fun", "school"])
print(choice)

# random float
random_float = random.random()
print(random_float)

sample = random.sample(range(100), 10)
print(sample)

rand_range = random.randrange(6)
print(rand_range)
