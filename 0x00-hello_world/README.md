# 0x00-hello_world 😃
There are not many to say regarding this file, here you will find the first welcome that holberton gives us to the programming language C (A language that I really appreciate and love like all the others). 

Each file in this folder is an exercise that the academy asks us to do. The level of these exercises is in ascending order.

## Exercises proposed by the academy.
We will show the exercises that are related to the files (Script) that belong to this folder.

0. Write a script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

1. Write a script that compiles a C file but does not link.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
* Example: if the C file is main.c, the output file should be main.o

2. Write a script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s

3. Write a script that compiles a C file and creates an executable named cisfun.
* The C file name will be saved in the variable $CFILE

4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0

5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option

6. Write a C program that prints the size of various types on the computer it is compiled and run on.
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

8. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s

9. Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
* Your program should return 1
* Your program should compile without any warnings when using the -Wall gcc option

### requirements 📋

The code is compiled with the ```gcc 4.8.4``` compiler using the ```-Wall ``` flags, therefore to get the executable file use the following command.

> gcc Filename

or for the second command.

> gcc Filename -o executable-file-name

The first command gives us an executable with the name of ```a.out``` and the second with the name of ```executable-file-name```, to run the program use the following command.

> ./a.out

or for the second command.

> ./executable-file-name

***Note: These requirements even appear in some exercises***
To execute the script, that is, the files it contains in its first line ```#!/bin/bash``` The following command is used.

> chmod 775 File_Name

o 

> chmod a+x File_name

To grant execution permissions to the file and be able to view its output on the screen, to derive its output use the following command.

> ./File_Name > Name_File_txt

The option ```File_Name``` executes the program and the operator ```>``` redirects it to the file Name_File_txt

Be careful with the operator ```>``` and ```>> ``` since although both do the same, one overwrites the file from the beginning (first) and the other continues without deleting any content (Second)

Authors ✒️

* Emmanuel Palacio Gaviria. 

Gratitude 🎁

To my Master:
* [Fredy Mena Andreda](https://github.com/xfry)

To my friends:
* [Evert escalante](https://github.com/Evertcolombia)
* [Jordan Buitrago](https://github.com/jordanbsandoval)

two very important people in this academy:
* Andrea Jaramillo.
* Laura Restrepo.

And finally to
* [Holberton](https://www.holbertonschool.com/co)  :yellow_heart:
