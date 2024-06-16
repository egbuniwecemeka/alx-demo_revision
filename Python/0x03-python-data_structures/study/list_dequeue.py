#!/usr/bin/python3

# List as a queue
from collections import deque

# dequeue makes t possible to perform seamless FIFO opeation
queue = deque(['Football', 'Basketball', 'Atletics'])
queue.append('Boxing')
queue.append('Swimming')
print(queue)

# remove first an second inserted item
queue.popleft()
queue.popleft()
print(queue)
