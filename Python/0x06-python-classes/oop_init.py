#!/usr/bin/python3
""" A python script that shows how __init__ initializies values to objects"""

class Staff:
    """ Staff class """
    def __init__(self, name=None):
        """ Initialize values to objects"""
        self.name = name
    
    def greet_staff(self):
        if self.name:
            print(f"The new staff name is {self.name}")
        else:
            print(f"The new staff is yet to be employed")
    

if __name__ == "__main__":
    """ Executes when run only as main script """
    staff = Staff()
    staff.greet_staff()

    staff1 = Staff("Basil")
    staff1.greet_staff()
