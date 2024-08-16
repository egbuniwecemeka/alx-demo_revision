#!/usr/bin/python3
""" A python script that displays a greeting using a method"""

class Greet:
    def say_hi(self):
        print('Hello Good Morning!')

if __name__ == "__main__":
    morning = Greet()
    morning.say_hi()
