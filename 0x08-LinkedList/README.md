# Singly Linked List
    A list is a collection of elements arranged in a linear format. They are two types namely 
- Arrays
- Linked lists

Arrays usually consist data types of similar types while linked lists can contain data types of different types
They consist of a node and a link. The node consists of data to be stored and a pointer to the next node.
In arrays, size is limited to definition, but in linked list size is not limited/defined to size
3 types namely

- Singly linked list - points to next node
- Double linked list - points to previous and next node
- Circular linked list - last node points to first node. It could be single or double linked

## Singly linked list
This consist of a node containing a structrue made up of a data and pointer component. The data containst the data type to be stored, while the pointer contains the link to the next node.
- typedef is a keyword used to create a synonym or alias name for a datatype
Note: typedef is used to introduce aliases/synonyms for types, and not variable names.
- Now, we will have to access our list. How do we do that we? We can do that wita pointer to the list but this pointer is important to access the first element of the list(The first element of the list in summary is the whole list). Why? This is because a list is naturally a recursive data structure ie a list is either NULL, or a piece of data, follow by a list

### Requirement/Steps for building a list
1. Define the node structure
2. Define types using typedef for readability
3. Set memory for the list

