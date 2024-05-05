#!/usr/bin/python3
""" Python script """
import re

def regex_string(string):
    pattern = r'^[a-zA-Z0-9]+$'

    for test_str in string:
        if not re.match(pattern, test_str):
            return False
    return True

string1 = ["abc", "123", "!@#", "1", ]
string2 = "Sarah123"
print(regex_string(string1))
print(regex_string(string2))
