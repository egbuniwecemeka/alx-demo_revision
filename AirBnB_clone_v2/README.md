# 0x02. AirBnB clone - MySQL

## cmd - support for line-oriented command interpreters
class cmd.Cmd(completekey='tab', stdin=None, stdout=None)

If stdin & stdout is not specified, they both default to sys.stdin && sys.stdout. To use a certain stdin , set the instances's **use(_)rawinput** to 'False'. Otherwise it is ignored.

## Cmd Objects
Cmd instance methods below

* Cmd.cmdloop(intro=None) - repeatedly issue a prompt, accepts input, parse prefix of received input and dispatcht to action methods, passing them(input) to remainder of line as argument. 

If readline module is loaded, input will automatically inherit bash-like history-list editing.

interpreter will recognize the command **foo** if it has a method do_foo(). Line beginning with '?' sent to do_help(). Line beginning with '!' - dispatched to do_shell(). method id returned when **postcmd()** returns true. return value of do_*() corresponds to postcmd() stop argument. 

completing of commands args is done by calling complete_foo() with arguments text, line, begidx, and endidx.

* text - text is the string prefix we are attempting to match
* line - line is the current input line with leading whitespace removed
* begidx and endidx - begidx and endidx are the beginning and ending indexes of the prefix text


* Cmd.do_help(arg) - All subclasses of Cmd inherit a predefined do_help(). If called with an arg 'bar' it invokes a method help_bar(). If help_bar is not present, it prints the docstring of do_bar(). Without argument, do_help() lists all available help topics.

* Cmd.onecmd(str)- Interpret argument as though it was typed in response to the prompt. return value is a flag indicating whether command line interpretation shoul stop.

* Cmd.emptyline() - called in response to an empty input line. If empty line still exists, last nonempty line is printed

* Cmd.default(line) - Called if input is not recognized. 

* Cmd.completedefault(text, line, begidx, endidx) - called to complete an input line

* Cmd.colummnsize(list, displaywidth=80) - Used to display a list as a compact set of columns.

* Cmd.precmd(line) - Hook method executed just before the command line is interpreted, but after input prompt is generated and issued.

* Cmd.postcmd(stop,line) - Hook method executed just after command dispatch is finished.

* Cmd.preloop() - Hook method executed once cmdloop() is called.

* Cmd.postloop() - Hook method executed once cmdloop() is about to return.

* Cmd.prompt - Prompt issued to solicit input.

* Cmd.identchars - string characters accpted for command prefix

* Cmd.lastcmd - last nonempty command prefix seen

* Cmd.cmdqueue - A list of queued input lines. cmdqueue list is checked in cmdloop() for new input. If nonempty, elememts are processed in order

* Cmd.intro - string to issue an intro or banner.

* Cmd.doc_header - header for help output for documented commands

* Cmd.misc_header - header to issue if help section has miscellaneous help topics

* Cmd.undoc_header - The header to issue if the help output has a section for undocumented commands

* Cmd.ruler - used to draw seperator lines under the help-message headers. If empty no ruler line is drawn and defaults to '='.

* Cmd.use_rawinput() - defaults to true. If true, cmdloop() uses input() to display a prompt and read the next command; if false, sys.stdout.write() and sys.stdin.readline() are used.


## Cmd Example
