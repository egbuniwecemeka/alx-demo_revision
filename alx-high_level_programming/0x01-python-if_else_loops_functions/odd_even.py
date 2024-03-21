#!/bin/python3
#for loop for iterating through integers to check
for i in range(20):
    #Use modulus to check if remainder is NOT EQUAL to 0
    if (i % 2) != 0:
        #print odd numbers
        print("{:d}".format(i))
