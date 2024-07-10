#!/usr/bin/python3

import urllib.request

req = 'https://alx-intranet.hbtn.io/status'

with urllib.request.urlopen(req) as response:
    html = response.read()
    print(html)
