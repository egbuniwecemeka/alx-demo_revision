#!/usr/bin/python3

# eval automatically converts input string to integers
age = eval(input("Enter your age: "))

if age >= 0 and age < 18:
    print("Not allowed")
elif age >= 18 and age <= 60:
    print("Allowed")
elif not(age < 60):
    print("Go home!")
else:
    print("underage or Overage")
