#!/usr/bin/python3

import statistics

data = [0, 10, 20 , 66, 45, 82, 89]

median = statistics.median(data)
variance = statistics.mode(data)
mean = statistics.mean(data)
print(f"median: {median}, variance: {variance} mean: {mean}")
