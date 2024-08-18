#!/usr/bin/python3
""" A Python script of a Robot class utilizing getter and setter methods """

class Robot:
    """ A Robot class"""

    def __init__(self, name=None):
        """
        Initiializing instance attributes

        Attributes:
            name (str): Input string variable
        """
        self.name = name
    
    def say_hi(self):
        """ Prints initialized output"""
        if self.name:
            print(f"Hello, I am {self.name}")
        else:
            print("There are 0 robots!")
    
    def set_name(self, name):
        """ Setter method to set value """
        self.name = name
    
    def get_name(self):
        """ Getter method to retrieve value """
        return self.name

if __name__ == "__main__":
    """ Execute as main program """
    # Robot x
    x = Robot()
    x.set_name("EJ-01")
    x.say_hi()

    # Robot y
    y = Robot()
    y.set_name(x.get_name())
    print(y.get_name())
