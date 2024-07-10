#!/usr/bin/python3

import urllib.request

# Making a request via a Request object
req = urllib.request.Request('https://alx-intranet.hbtn.io/status')

with urllib.request.urlopen(req) as response:
    html = response.read()
    print(html)
