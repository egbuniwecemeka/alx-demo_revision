#!/usr/bin/python3
""" """
class Robot:
    def __init__(self, name, year):
        self.name = name
        self.year = year
    
    def __repr__(self):
        return "Robot('" + self.name + "', " + str(self.year) + ")"
    
    def __str__(self):
        return "Name: " + self.name + ", Year: " + str(self.year)
    
if __name__ == "__main__":
    r = Robot("EJ-01", 10)
    r_str = str(r)
    print(r_str)
    print("Type of r_str: ", type(r_str))
    new = eval(r_str)
    print(new)
    print("Type of new:", type(new))