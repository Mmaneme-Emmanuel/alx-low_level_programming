0x1C. C - Makefiles

Resources
Read or watch:

What is a makefile and how does it work
Installing the make utility
make-official documentation
More about Makefile
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them

reate your first Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: none

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files

Create your first useful Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files
