""" 
from my_math.abs import my_abs 

If you are using an absolute path, you can’t execute this module from another point as the “root” of your project. Hence, why it did not work when i called it from test_positive.py
"""

""" Using a relative path therefore makes this module executable from another point as the "root" of your project """
def is_positive(n):
    return abs(n) == n