#!/usr/bin/python3


""" 
    break - breaks out of innermost for() and while() loops

    for - else clause executes after the loop reaches final iteration.

    while - expected after loop condition becomes false
"""


output = ""
# else statement belongs to for loop, not if statement
for n in range(2, 20):
    for x in range(2, n):
        if n % x == 0:
            output += f"even: {n}, "
            break
    else:
        output += f"prime: {n}, "

output = output.rstrip(', ') + '\n'
print(output)
