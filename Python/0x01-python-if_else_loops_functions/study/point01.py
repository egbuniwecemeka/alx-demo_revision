#!/usr/bin/python3

class Point:
    __match_args__ = ('x', 'y')
    def __init__(self, x, y):
        self.x = x
        self.y = y

def match_point(point):
    match point:
        case []:
            print("No point")
        case [Point(x, y)]:
            print(f"A point of {x} and {y}")
        case [Point(0, y=y)]:
            print(f"Point Y={y}")
        # An if can be used as a guard, which if results in false
        # match goes to the next case block
        case Point(x, y) if x == y:
            print(f"Y=X at {x}")
        case [Point(0, y1), Point(0, y2)]:
            print(f"Two points of y at {y1} and {y2}")
        # Sub patterns may also be captured using the 'as' keyword
        case (Point(x1, y1), Point(x2, y2) as p2):
            pass # captures 2nd element of input as p2, long as its a sequence of two points
        case _:
            print("No point found")
