# simple_shell
C - Simple Shell  (C Group project Syscall)  (https://github.com/Michafolab/simple_shell/assets/117805721/34606566-3b0d-4d32-a7e2-fbf368dbf801)

![image](https://github.com/Michafolab/simple_shell/assets/117805721/0a48d5e2-1b9b-4f23-8428-fa429a2c7c36) ![image]


simple_shell (ssh)
![image](https://github.com/Michafolab/simple_shell/assets/117805721/f9b57632-a106-4d1b-840d-b8b0c8385de6)


![image](https://github.com/Michafolab/simple_shell/assets/117805721/508a74af-ea51-4b4d-a1c8-505cf9af4254)


command interpreter (shell)
SYNOPSIS
./ssh


COPYRIGHT
simple_shell is Public Domain, no copyright protection


DESCRIPTION
simple_shell replicates a command line interpreter (a shell), which is a user interface program for access to an operating system's services. This shell is designed to interact with a linux distribution or unix like system that uses linux system calls and other commands found in the linux PATH, for example, the $PATH:

/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:
simple_shell has a set of custom built-in commands, and also integrates with other commands located in the system's PATH. The output is designed to exactly or to closely replicate the shell 'sh' or 'dash'as possible.


$ man dash
  simple_shell \
takes commands from files, shell scripts or user input in either an interactive or non-interactive mode (explained in INVOCATION section).


INVOCATION
To initialize simple_shell, you must compile all the included files using the GNU compiler collection: gcc. Then run the output file, with a command such as this:

$ ./a.out.  
simple_shell has been written to pass all of these warning checks and was designed to be compiled with the following command:

 $ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
If simple_shell is executed, it will initialize in what is considered 'interactive mode.' In this scenario, the user is prompted for a command and then the command is executed after the newline or 'enter' is input. simple_shell can also function in non-interactive mode by using shell scripts, such as a '|' before the simple_shell executable file ('ssh'). This is an example:

 $ echo 'ls' | ./hsh
Commands may also be input into simple_shell through a file containing commands:

 $ cat aFile | ./hsh
OPTIONS
simple_shell does not take any options

BUILT-IN COMMANDS
This section has information on the included builtin commands with simple_shell

env
writes environment to stdout
setenv
sets or changes an environmental variable. example: 'setenv USER=bobby'
unsetenv
removes environmental variable. example: 'unsetenv USER'
history
writes history to stdout
exit
exits simple_shell
cd
changes working directory
help
used with another command prints help message. example: 'help env'
alias
creates an alias. example 'alias ll='ls -la''
unalias
removes an alias. example 'unalias ll'
"SEE ALSO"
sh (1), bash (1),

BUGS
none known. simple_shell does not currently replicate these tasks:
