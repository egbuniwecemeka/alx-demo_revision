#!/usr/bin/python3

invest, interest = input("Enter your investment and expected interest: ").split()
invest = float(invest)
interest = float(interest) * .01

for i in range(10):
    invest = invest + (invest * interest)
print(f"Investment after 10 years: {invest:.2f}")
