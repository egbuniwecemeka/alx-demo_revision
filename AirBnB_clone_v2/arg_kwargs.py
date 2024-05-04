#!/usr/bin/python3

def arg_n_kwarg(arg, *kwargs):
    print("The first value is {}".format(arg))
    for arg in kwargs:
        print("Concurrent value: {}".format(arg))    


arg_n_kwarg("Uche", "Celestina", "Ekene")

"""
Usage of **kwargs - allows the passing of keyworded variable
length of arguments to a function
"""

def staff(**kwargs):
    print('\n')
    if kwargs is not None:
        for key, value in kwargs.items():   # iteritems() replaced by items()
            print("{}: {}".format(key, value))
    
staff(name="Emma", age=2, email="egbuniwecemeka@gmail.com")

""" Using *args and **kwargs to call a function  """

def test_args_kwargs(arg1, arg2, arg3):
    print("arg1:", arg1)
    print("arg2:", arg2)
    print("arg3:", arg3)

kwargs = {"arg3":"Chioma", "arg2":27, "arg1":"female"}
test_args_kwargs(**kwargs)