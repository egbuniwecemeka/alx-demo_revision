# Imprts, Modules & Command-Line Arguments

## import & modules
* import modulename
* from modulename import name
* from modulename impport all (not advisable)
* import modulename as name (binding directly name to modulename)
* from modulename import name as anothername
* Import each module once for efficiency sake. Therefore if a module is changed, the interpreter should b restarted, or if one module, test interactively using importlib.reload(modulename)
* executing modules as scripts - if __name__ = "__main__": This syntax checks if the python script is run directly as the main program or imported as a module in another script. If it is run as the main program, __main__ is assigned to __name__ and it runs as the main program, and code underneath it is executed. Otherwise, if it is imported, __name__ is not __main__ and the code underneath is not included.
* module names are listed in the (sys.builtin_module_names) if not found there, the python interpreter searches for the file in a list of directories given by the variable sys.path
* Python cache the compiled form of each module in the __pycache__ dir under module.version.pyc

### Tips
* -0 and -00 switches can be used to reduce the size of compiled modules. -0 switch removes assert statements. -00 removes both assert statements and __doc__strings
* A program doesn't run any faster when it is run from a .pyc file than a .py file. But .pyc loads faster.
* compileall module can create .pyc files for all modules in a dir

### Standard Modules (Python Library Reference)
These are built-in modules that provide access to operations, for better efficiency or provide access to operating systems primitives such as system calls. eg winreg module, sys module
* sys.ps1 - defines system call used in primary prompt (interactive mode)
* sys.ps2 - defines system call used in secondary prompt. (interactive mode)
* sys.path - list of strings determining the interpreter's search path for modules. It is initialized to a default path from the environment variable PYTHONPATH or from a built-in default if PYTHONPATH is not set.

### dir() Function
The built-in dir() is used to view the names a module defines. They are displayed in a list string format
* An empty dir() without arguments list all names  defined currently. Note: It lists all types of names namely, variable, functions, modules etc.
* dir() does not list the names of built-in functions and variables.
* To list that, use the standard **builtins** modules eg dir(builtins)
* *built-in methods can be used to specify certain conditions eg "module/instance.startswith("__")" checks if  a module/instance starts with underscore*

### Packages
Packages are a way structuring Python module namespaces using "dotted names"
* eg A.B B is a submodule in a package named A.
* As module names help differentiate btw different global variables of different modules, dotted modules saves from worrying about modules names

### Reative and Absolute imports
Since the name of the main module is always "__main__", modules intended for use as the main program must use absolute imports
* Absolute imports - refrenced by address to absolute package, sub-packages & submodules addresses
* Relative imports - uses period (.) for current package and parent package (..)

###
The special attribute __path__. This stores the list of all the names of the directories containing __init__.py files, before the code in them is executed.
* This variable can be modified which affects future packages and submodules



## Command line arguments

### operting system interface
* import os
* os.getcwd()
* os.chdir('/alx/python')
* os.system('mkdir study')
* dir(os) - list all module functions
* shutil module has a higher interface and is easier to use
* import shutil

### File wildcard
glob module has a function for listing directories from widcard searches


### Command Line 

Command utility scripts needs to process command line arguments. These arguments are stored in the *sys module argv attribute*
* argparse - more sophisticated mechanism of process command line arguments.
* sys module also has attributes stdin, stdout nd stderr
* stderr is useful for displaying error messages
* eg sys.stderr.write('Error message\n')


### String pattern matching
* The *re* module is used for regular expressions for advanced string processing
* for simple capabilities, string methods are preferred

### Mathematics

* math module gives access to underlying C library functions
* random makes it possible to carry out operations on random numbers
* statistics module calculates basic statistical operations on numeric data


### Internet Access
urllib can be used for retrieving requests from URLs and smtplib for sending mails

### Datess and Times
The datetime module provide classes for manipulating dates and time

### Data compression 
the following modules handle compression and archiving. zlib, gzip, bz2, lzma, zipfile, tarfile

### Performance Management
Certain operations to different approaches of the same problem, can be calculated using *timeit module*




## compileall -- Byte-compile Python libraries
module provides utility for installing python libraries. Module can be used to create cached byte code files at library instalation time, making it available for even users without write permission to library directories

### Command-line use
This module can be used as a script on the command line by using (python3 -m compileall "directory/file") to compile python files
* directory ... or file ... - positional arguments are files or directories that contains source files and compile and traversed recursively
* -l do not recurse into subdirectories but compile name of identified source code file or directory
* -f force rebuilds even on updated timestamps
* -q Prints error messages, not list of compiled files
* destdir - directory prepended (at the front) of the path to each filebeing compiled
* -x regex - to search for full path of file being compiled, if a match is found, the file is skipped
* -i list - reads file list adding each line to the list of files and directories to compile. If list is -, read lines from stdin
* -b writes bytecode to their legacy locations and names. Default writes are to PEP3147 legacy locations and names

Note: There's no command line option for control of optimization level of compile(), because d python interpreter provides this option: **python -O -m compileall**

### Public functions
compileall.compile_dir(dir, maxlevels=10, ddir=None, force=False, rx=None, quiet=False, legacy=False, optimize=-1)

* Recursively descends down the dir tree, compiling .py files.
* maxlevels = to limit depth of recursion. default is 10
* ddir - if given, it is prepended to each file being compiled for use as timestamp during tracebacks. It is also compiled into byte-code which can also be used to tracebacks incase source code does not exist
* force - If force is true, modules are re-compiled regardless of timestamps being updated
* quiet - If true, nothing is printed to the stdout, unless error messages.
* rx - If given, search method is called on the full path to each file considered for compilation. If it returns a value true, the file is skipped. This means the regular expression provided to rx is used to exclude files from being compiled, rather than including them.
* If legacy is true, byte-codes are written to their legacy names and location. The default write is to PEP 3147 locations annd names.
* optimize - specifies the optimization level of the compiler.


compileall.compile_file(fullname, ddir=None, force=False, rx=None, quiet=False, legacy=False, optimize=-1

* Compile the file with pathname 'fullname'
* ddir - if given, it is prepended to the path of the file being compiled for use as timestamp during tracebacks. It is also compiled into byte-code which can also be used to tracebacks incase source code does not exist
* rx - If given, search method is called on the full path to file being compiled. If it returns a value true, the file is skipped. This means the regular expression provided to rx is used to exclude files from being compiled, rather than including them
* quiet - If true, nothing is printed to the stdout, unless error messages.
* If legacy is true, byte-codes are written to their legacy names and location. The default write
 is to PEP 3147 locations and names.
* optimize - specifies the optimization level of the compiler.



# Imprts, Modules & Command-Line Arguments

## import & modules
* import modulename
* from modulename import name
* from modulename impport all (not advisable)
* import modulename as name (binding directly name to modulename)
* from modulename import name as anothername
* Import each module once for efficiency sake. Therefore if a module is changed, the interpreter should b restarted, or if one module, test interactively using importlib.reload(modulename)
* executing modules as scripts - if __name__ = "__main__": This syntax checks if the python script is run directly as the main program or imported as a module in another script. If it is run as the main program, __main__ is assigned to __name__ and it runs as the main program, and code underneath it is executed. Otherwise, if it is imported, __name__ is not __main__ and the code underneath is not included.
* module names are listed in the (sys.builtin_module_names) if not found there, the python interpreter searches for the file in a list of directories given by the variable sys.path
* Python cache the compiled form of each module in the __pycache__ dir under module.version.pyc

### Tips
* -0 and -00 switches can be used to reduce the size of compiled modules. -0 switch removes assert statements. -00 removes both assert statements and __doc__strings
* A program doesn't run any faster when it is run from a .pyc file than a .py file. But .pyc loads faster.
* compileall module can create .pyc files for all modules in a dir

### Standard Modules (Python Library Reference)
These are built-in modules that provide access to operations, for better efficiency or provide access to operating systems primitives such as system calls. eg winreg module, sys module
* sys.ps1 - defines system call used in primary prompt (interactive mode)
