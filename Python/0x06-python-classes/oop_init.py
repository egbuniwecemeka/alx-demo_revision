#!/usr/bin/python3
""" A python script that shows how __init__ initializies values to objects"""

class Staff:
    """ Staff class """
    def __init__(self, name):
        """ Initialize values to objects"""
        self.name = name
    
    def greet_staff(self):
        print(f"The new staff name is {self.name}")
    

if __name__ == "__main__":
    """ Executes when run only as main script """
    staff = Staff()
    staff.greet_staff()
