#!/usr/bin/python3

class Point:
    def __init(self, x, y):
        self.x = x
        self.y = y

def match_point(point):
    match point:
        case Point(x=0, y=0):
            print("Origin")
        case Point(x=x, y=0):
            print(f"X={x}")
        case Point(x=0, y=y):
            print(f"Y={y}")
        case Point():
            print("Someother point")
        case _:
            print("Not a point")
