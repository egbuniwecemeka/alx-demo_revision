#!/usr/bin/python3
""" A python module of a Robot class utilizing getter and setter methods """

class Robot:
    """ A Robot Class"""

    def __init__(self, name=None, year=None):
        """
        Initializing object attributes
        
        Attributes:
            name (str): Input string value
            year (int): Input integar value
        """
        self.name = name
        self.year = year

    def say_hi(self):
        """ Format initialized output """
        if self.name and self.year:
            print(f"Hello, I am {self.name} and was created in {self.year}")
        else:
            print("I have not been named yet, and was created in XXX")
    
    def set_name(self, name):
        """
        Setter method to update the robot's name

        Args:
            name (str): name to be assigned to robot
        """
        self.name = name
    
    def get_name(self):
        """ Retrieves the robot's name """
        return self.name
    
    def set_prod_year(self, prod_year):
        """
        Setter method to update robots production year

        Args:
            prod_year (int): Sets the robot production year
        """
        self.prod_year = prod_year
    
    def get_prod_year(self):
        """ Retrieves the robot's production year"""
        return self.prod_year
    

if __name__ == "__main__":
    """ Execute as main program """
    x = Robot("Emeka", 2024)
    
    y = Robot("Marvin")

    x.say_hi()
    y.say_hi()
