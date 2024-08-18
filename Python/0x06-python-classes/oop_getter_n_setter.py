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
        if self.name:
            print(f"Hello, I am {self.name}")
        else:
            print("I have not been named yet, and was created in XXX")
        
        if self.year:
            print(f"{self.name} was created in {self.year}")
        else:
            print(f"{self.name} do not know when I was created")


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
        self.year = prod_year


    def get_prod_year(self):
        """ Retrieves the robot's production year"""
        return self.year
    

if __name__ == "__main__":
    """ Execute as main program """
    x = Robot("Emeka", 2024)
    x.say_hi()
    x.set_name("Junior")
    x.set_prod_year(2025)
    x.say_hi()


    y = Robot()
    y.set_name("Marvin")
    y.set_prod_year(2026)
    # Format to see getter value
    print(y.get_prod_year())
    y.say_hi()
