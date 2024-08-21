#!/usr/bin/python3
""" A simple class testing class attributes"""

class Attribute:
    def __init__(self):
        self.public = "I am public"
        self._protected = "I am protected"
        self.__private = "I am private"


if __name__ == "__main__":
    """ Execute as main script """
    attr_type = Attribute()

    print(attr_type.public)
    print(attr_type._protected)
    # Private attribute inaccessible from outside class
    print(attr_type.__private)