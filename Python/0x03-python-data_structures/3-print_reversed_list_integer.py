#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    reverse = my_list.reverse()

    for i in range(len(my_list)):
        print(my_list[i])
