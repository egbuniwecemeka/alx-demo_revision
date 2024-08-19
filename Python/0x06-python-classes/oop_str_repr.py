#!/usr/bin/python3
""" Understanding usage of str and repr magic methods """

language = ["Python", "C", "JavaScript", "MySQL"]
car = {"benz":2, "bmw": 1}
x = 9

print(str(language))
print(repr(language))
print(str(car))
print(repr(car))
print(str(x))
print(repr(x))

class Player:
    def __repr__(self):
        return 42

p = Player()
print(repr(p))
print(str(p)) # defaults to repr if str is not specified in the class