#!/usr/bin/python3

def no_c(my_string):
    result = ''
    """
    for char in my_string:
        if ord(char) != 67 and ord(char) != 99:
            result += char
    """
    return result.join([c for c in my_string if ord(c) != 67 and ord(c) != 99])
