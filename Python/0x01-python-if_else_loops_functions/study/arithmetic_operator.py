#!/usr/bin/python3

# Enter input and store in variables
num1, operator, num2 = input("Enter num1, operator & num2: ").split()
num1 = int(num1)
num2 = int(num2)

if operator == '+':
    print("{} {} {} = {}".format(num1, operator, num2,  num1 + num2))
elif operator == "-":
    print("{} {} {} = {}".format(num1, operator, num2,  num1 - num2))
elif operator == "*":
    print("{} {} {} = {}".format(num1, operator, num2,  num1 * num2))
elif operator == "/":
    print("{} {} {} = {}".format(num1, operator, num2,  num1 / num2))
else:
    print("Input is nethier an integer or arithmetic operator (+, -, *, /)")
