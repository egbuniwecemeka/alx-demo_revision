#!/usr/bin/python3

from urllib.request import urlopen

with urlopen('http://worldtimeapi.org/api/timezone/etc/UTC.txt') as response:
    for c in response:
        c = c.decode()
        if c.startswith('datetime'):
            print(c.rstrip())
