#!/usr/bin/python3

from enum import Enum

class Color(Enum):
    RED = 'red'
    BLUE = 'blue'
    GREEN = 'green'

colors = Color(input("Enter 'red', 'green', 'blue'"))

match colors:
    case Color.RED:
        print("Color red")
    case Color.BLUE:
        print("Color blue")
    case Color.GREEN:
        print("Color green")
