#!/usr/bin/python3
""" Understanding usage of str and repr magic methods """

""" import datetime

today = datetime.datetime()
rep_r = repr(today)
# Note that str cannot be parsed into an object using eval
r = eval(rep_r)
print(r)
print(type(r))

language = ["Python", "C", "JavaScript", "MySQL"]
car = {"benz":2, "bmw": 1}
x = 9
# The below formats the string representation of their data types.
print(str(language))
print(repr(language))
print(str(car))
print(repr(car))
print(str(x))
print(repr(x)) """

class Staff:
    def __init__(self, name, year):
        self.name = name
        self.year = year
    
    def __repr__(self):
        return "Staff('" + self.name + "', " + str(self.year) + ")"
    
if __name__ == "__main__":
    s = Staff("Emeka", 59)
    s_str = str(s)
    print(s_str)
    print("The type of s_str:", type(s_str))
    new = eval(s_str)
    print(new)
    print("Type of new:", type(new))