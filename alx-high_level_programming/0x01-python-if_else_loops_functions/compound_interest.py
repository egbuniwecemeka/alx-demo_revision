#!/bin/python3

investment = input("Enter investment: ")
comp_interest = input("Enter expected interest rate: ")

investment = float(investment)
comp_interest = float(comp_interest) * .01

for i in range(10):
    investment = investment + (investment * comp_interest)
print("Investment in 10 years = {:.2f}".format(investment))
