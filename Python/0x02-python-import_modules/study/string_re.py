#!/usr/bin/python3

import re

re.findall(r'\bf[a-z]*', "She is my mom, and I love till eternity")

re.sub(r'(\b[a-z]+) \1', r'\1', 'The the man is around')
