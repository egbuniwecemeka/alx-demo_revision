# HEADER FILE
This is e file with a .h extension that is used to store C declarations and macro definition to be shared across different source files.

It is good practice to keep all function declaration, macro definition, system wide vriables and and constants in a header file, and include the header file wherever needed.

* #include <.file>  - used for system defined header files
* #include "file" - for user defined header files

## Only-One Header
The need to write function definitions, macros & system wide variables inside conditional headers(#ifndef) is to prevent the compiler from reading a duplicate of of the header file. the #ifndef ensures if a file is added twice the conditional becomes false, beecause the header file has been defined. therefore, the preprocessor skips the content of the file and compiler does not see it twice.
Tip: Use if..else conditionals to include/or use header files across various operating systems

