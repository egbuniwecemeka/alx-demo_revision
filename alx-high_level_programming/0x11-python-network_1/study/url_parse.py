#!/usr/bin/python3

import urllib.parse
import urllib.request

url = 'http://www.someserver.com/cgi-bin/register.cgi'
values = {
        'name': 'Emeka',
        'location': 'Lagos',
        'Language': 'Python'
        }

data = urllib.parse.urlencode(values)
data = data.encode('ascii')
req = urllib.request.Request(url, data)
with urllib.request.urlopen(req) as response:
    html = response.read()
