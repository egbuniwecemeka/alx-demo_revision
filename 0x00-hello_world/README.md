Tasks

0. Preprocessor 
 This script runs a source c file saved in a variable only through the preprocessor stage and writes its outpit in another file
	\\\main.c - Entry point 
	\\\0-preprocessor - Script containg preprocessing code 
	\\ gcc -E (preprocessing option)
	\\\export .c file into variable($CFILE)
	\\\Make script executable 
	\\\Ensure all files and codes are betty compliant
	\\\Execute script - ./script_name
	\\\tail output file from script to see result - tail output_file_name

1. Write a script that compiles a C file but does not link.
	\\c file saved in $CFILE variable
	\\gcc -c (compiling option)
	\\output same as input $CFILE

2. Write a script that generates the assembly code of a C code and save it in an output file.
	\\c file saved in $CFILE variable
	\\gcc -S (assembly option)

3. Write a script that compiles a C file and creates an executable named cisfun.
	\\c file saved in variable $CFILE

4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
	\\include std guard
	\\entry point
	\\puts func
	\\exit point

5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
	\\printf was used not puts
	\\return/exit status 0
	\\echo $? - returns the exit status of shell last command
	\\compiled using gcc

6. Write a C program that prints the size of various types on the computer it is compiled and run on.
