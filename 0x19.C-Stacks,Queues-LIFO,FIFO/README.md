# 0x19. C - Stacks, Queues - LIFO, FIFO

## STACKS


Apart from these 3 main functions, it is necessary to check the overflow and underflow conditions to avoid unfavorable situations. ie (stack_insert.c stack_delete.c and stack_display.c)

* STACK OVERFLOW
    this is a situation where the static memory is completely filled and has no space it van alloate. Such a phenomena  is known as stack-overflow

* STACK UNDERFLOW
    A situation where he cannot perform an operation like deletion or display of elememts, because no element has been inserted yet resulting in an empty stack is known as stack underflow

Stacks can be implemented either of the following ways:
1. Statically   - Array implementation(LIFO)

2. Dynamically  - Linked list implementation

The following implementation processes involves the use of the ffg regular operatios namely insertion, delete and display operations.
Note: It is important to note that these operations on stack are carried out at the top and therefore in certain operations/processes there will be need to transverse through the stack.
A pratical approach is the example of a collection of plates stacked on top of each other. If we want to add or remove from the stack of plates, the first or top plate will be affected.
