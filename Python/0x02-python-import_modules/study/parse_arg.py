#!/usr/bin/python3

# import argparse module
import argparse

# Create ArgumentParser object
parser = argparse.ArgumentParser(prog='parser_arg', description="Prints the first n lines of a file")
# Define arguments
parser.add_argument('filenames', nargs='+')
parser.add_argument('-l', '--lines', type=int, default=10)
# Converts parsed argument to Namespace object
args = parser.parse_args()
print(args)
