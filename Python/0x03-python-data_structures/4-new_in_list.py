#!/usr/bin/python3

def new_in_list(my_list, idx, element):
    if idx < 0 or idx >= len(my_list):
        return my_list
    # A copy was created to not directly modify the main list
    # as lists are mutable
    copy = my_list.copy()
    copy[idx] = element
    return copy
