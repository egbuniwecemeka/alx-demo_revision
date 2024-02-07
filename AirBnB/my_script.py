""" 
    Dotted module name == Path
    from my_math.abs import my_abs => YES YES YES! now you can use your function like that: my_abs(89)
"""
from my_math.abs import my_abs

res = my_abs(10, 5)
print("Result:", res)


""" import * is dangerous """
from my_math.functions import *
print(add.my_add(8, 7))
print(sub.my_sub(8, 7))
print(div.my_div(8, 7))
print(mul.my_mul(8, 7))

""" Relative versus Absolute import """
from my_math.positive import is_positive
print(is_positive(5))
print(is_positive(-1))
print(is_positive(33))