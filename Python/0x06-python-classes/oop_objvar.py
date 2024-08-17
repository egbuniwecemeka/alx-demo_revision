#!/usr/bin/python3
""" A python that explains fields of a class and object namespace """

class Robot:
    """ A Robot Model """

    # Robot number
    total_robots = 0

    def __init__(self, name):
        """ Initializes Robot class """
        self.name = name
        print(f"Initialize to {self.name}")

        Robot.total_robots += 1

    def say_hi(self):
        """ Introduce robot """
        print(f"Hello i am {self.name}")
    
    def kill(self):
        """Kill robot """

        Robot.total_robots -= 1
        
        if Robot.total_robots == 0:
            print(f"{self.name} is no more. Sad :-(")
        else:
            print(f"There are {Robot.total_robots} left!")
        
    @classmethod
    def robot_count(cls):
        """ Retrieves the total number of robots"""
        print(f"Total robots => {cls.robot_count}")

r1 = Robot('Abc')
r1.say_hi()
Robot.robot_count()

r2 = Robot('Def')
r2.say_hi()
Robot.robot_count()

print(f"After X years of service, its time for refresh")

r1.kill()
Robot.robot_count()



