# AirBnB

* Packages(A collection of modules)
These are ways of structuring Python modules namespaces using 'dotted modules names'. Eg module name A.B indicates a submodule B in a package named A. An advantage of module is that it saves the authors of different modules from worrying about global variable names.
Eg Design a collection of modules('a package) for the correct handling of sound files and sound data.

1. Firstly we will need a module to handle the conversion operation between file types
2. Secondly, we will need to create a collection of modules that handle the various sound operations

When importing packages, Python searches directories of sys.path for sub-directories

__init__.py are required to help python treat directories as packages, this helps prevents directories wth common names(eg strings) from unintentionally hiding valid modules that occur later in the search path.
In simple terms, __init__.py can be an empty file, but it can also execute initialization code

Users of packages can import individual modules.
eg import sound.filter.echo

Loads the submodule sound.effects.echo(Must be referenced with its full name)
sound.effects.echo.echofilter(input, output, delay=0.7, atten=4)

Another alternative of importing the submodule is:
from sound.effects import echo
The above code loads the submodule echo, makinging it available without its package prefix. This can now be used
sound.effects.echo.echofilter(input, output, delay=0.7 ,atten=4)

Another method is to import the function/variable of the submodule directly,eg:
from sound.effect.echo import echofilter
Likewise, this loads the submodule echo and makes ite function echofilter directly available.

Note: When using __from package import item__, __item has to be a subpackage/submodule, class, variable or function of the package. The import statement tests whether item is defined in package, if not it defines it as a package and trys to load it. If it fails it throws an **ImportError* exception

Also, using __import item.subitem.subsubitem__, each item except the last must be a package. The last can be a module or package but cannot br a variable, class, fuction defined in the previous item.

## Importing * From a Package

In a situation where (*) imports all sub-modules from a packagae, this could take a long time having unwarranted side effects. A common fix  is for the package author to define an __explicit index__ of the package. The import statement the usess the following convection: if the packages __init__.py defines a list __all___, this should contain all the list of modules name that should be imported when __from package import__ occurs. It is up to the package author to keep the list up-to-date or not support it if author does not see a need for importing*.
If __all__ is not defined, the statement "from package import *" does not import all submodules from the package into the current namespace. Although it ensures the package has been successfully imported(as well as initialization code) as wel as importing names defined in the package
Eg import sound.effects.echo
import sound.effects.surround
from sound.effects import*
In the above, echo and surround modules are imported in the current namespace because they are defined in the sound.effects package. When the from...import statement is executed. (This also works when __all__ is defined.)
Although certain modules are designed to export only names that follow certain patterns when you use import *, it is still considered bad practise in production code.

## Intra-package References

When packages are structured into subpackages, you can use absolute imports to refer to submodules of siblings packages.
Eg if the sound.filters.vocode module needs to use the sound.effects.echo module it can use from sound.effects import echo

Also, relative imports can be used  hence 'from module import name'. Although these imports uses (.)dots to indicate current and parent packages involved in the relative import.
Note: Relative imports are always based on the name of the current module. Since the name of the main module is always "__main__", modules intended for use as the main module always use absolute imports

Question: What are the differences between absolute and relative imports of modules/packages.

## Packages in Multiple Directories

Packages support the special attribute (__path__). This is initialized to contain the list of directories holding the packages's (__init__.py) before the code in that file is executed

## Packages

A python file can be a module, but when the file is in a folder, it becomes a package
In C: #include "abs.h"
In Python: "import abs"
abs.my_abs(98)
or
"from abs import my.abs"
my_abs(98)

In C: #include my_maths/abs.h
In Python:
from my_maths.abs import my_abs
my_abs(98)

import my_maths.abs
my_math.abs.my_abs(98)

## Dotted modules == Path

my_script.py and my_math/abs.py was used for this example. How can i make use of a function abs(a, b) in abs.py from my_script.py
"from my_math.abs import abs" (Write in my_script.py)
Note: Although this is not complete without the magic file: (*__init___.py* file). Each folder must contain an empty *__init___.py* file as this makes it a package. This file should be empty except when * is used.

## import * is dangerous

Using * is considered bad practice in programming. In that case, *__init.py___* should not be empty but contain all the list of modules to load.

## Relative versus absolute import

Eg:
from my_func.abs import my_abs (Absolute import)
from abs import my_abs (Relative import)


## Unittest

Important concepts include;

1. Test fixture - preparation needed to perform one or more test or an associative clean up action
2. Test case - condition to test for. A test for a required response to an input. Unittest may provide a base class __TestCase__ which may be used to test for new cases
3. Test suite - A collection of test cases. It aggregates tests that should be executed together.s
4. Test runner - orchestrates the execution of test cases and provides the outcome to the user. A graphical, textual or special cases may be used to display result of test.
Note: The script Tools/unittestgui/unittestgui.py is apython source distribution GUI tool for easy use of test discovery and execution 
