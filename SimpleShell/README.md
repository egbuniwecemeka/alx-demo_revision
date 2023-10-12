Concepts to writing my own shell

1. Proess Identifier(PID) & Parent Process Identifier(PPID).

2. Command Line Arguments(argc &argv)

3.Executing a program(with execve system call)

4. Creating a process(with fork system call)

5. Suspending a process(with wait system call)

6. File information(with stat system call)

7. Environment(printenv, etc)


1, PID & PPID
What  is a process?
A process is an instance of an executing program with an unique ID. ie a process is a progrm in execution

what is pid_t??
pid_t is a signed data type capable of representing a unique id
