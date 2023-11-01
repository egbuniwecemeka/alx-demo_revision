# File handling

C I/O File handling handles files on the secondary storage eg hard disk.
They are as follows;

1. Stream-Oriented data files - data is stored in the same manner as it appears on the screen.
2. System-Oriented data files -  data files are more closely with the operating system.

// C File Operations

1. Creating a file
2. Opening a file
3. Reading a file
4. Writing in/to a file
5. Closing a file

//Steps for processing a file

1. Declare a file pointer
2. Opening the file usinf fopen() function
3. Process the file using the suitable function
4. Close the file using fclose() function

// Useful methods

1. fopen - open a file
2. fclose - close a file
3. getc - read/get character from a file
4. putc - write character to a file
5. getw - read/get int from a file
6. putw - write int to a file
7. fprintf - prints formatted output in a file
8. fscanf - reads formatted input from a file
9. fgets - reads string of characters from a file
10. fputs - writes string of characters to a file
11. feof - detects end of file marker

## File Descriptors(FD, less frequently fildes)

// File descriptors are unique process-identifer(handle) for files or other input/output resource such as pipes or network socket.

// FD typically have non-negative values. Negative values are reserved for errors and "no value condition"

//Each unix process should have three standard POSIX file descriptors corressponding to the three streams

Integer value Name <unistd.h> symbolic constant[1]     <stdio.h> file stream[2]
0. Standard    input     STDIN_FILENO                     stdin

1. Standard    output    STDOUT_FILENO                   stdout
2. Standard    error     STDERR_FILENO                    stderr
