# 0x05. C - Pointers, arrays and strings

Most of the exercises were dealt with with pointers, leaving aside the resolution with its counterpart indexing.
Since pointers are more flexible and efficient than handling it with vector arithmetic (although the arithmetic is the same for a pointer as for an array -> but for arrays they are limited.)

### requirements 📋

The code is compiled with the ```gcc 4.8.4``` compiler using the ```-Wall -Werror -Wextra``` and ```-pedantic``` flags, therefore to get the executable file use the following command.

> gcc Filename

or for the second command.

> gcc Filename -o executable-file-name

The first command gives us an executable with the name of ```a.out``` and the second with the name of ```executable-file-name```, to run the program use the following command.

> ./a.out

or for the second command.

> ./executable-file-name

### The exercises of this project.
**Exercise called mandatory**

 0. 98 Battery st. mandatory 
 
 Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

    Prototype: void reset_to_98(int *n);

1. Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

    Prototype: void swap_int(int *a, int *b);
    
2. This report, by its very length, defends itself against the risk of being read 

Write a function that returns the length of a string.

    Prototype: int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more

3. I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.

    Prototype: void _puts(char *str);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.

 4. I can only go one way. I've not got a reverse gear mandatory 
 
 Write a function that prints a string, in reverse, followed by a new line.

    Prototype: void print_rev(char *s);

5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.

    Prototype: void rev_string(char *s);

 6. Half the lies they tell about me aren't true
 
 Write a function that prints every other character of a string, starting with the first character, followed by a new line.

    Prototype: void puts2(char *str);

 7. Winning is only half of it. Having fun is the other half 
 
 Write a function that prints half of a string, followed by a new line.

    * Prototype: void puts_half(char *str);
    * The function should print the second half of the string
    * If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

8. Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

    * Prototype: void print_array(int *a, int n);
    * where n is the number of elements of the array to be printed
    * Numbers must be separated by comma, followed by a space
    * The numbers should be displayed in the same order as they are stored in the array
    * You are allowed to use printf

9. strcpy 

    * Prototype: char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

    Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.


***Exercises called advanced (They seem to be a little more difficult)***

Write a function that convert a string to an integer.

    * Prototype: int _atoi(char *s);
    * The number in the string can be preceded by an infinite number of characters
    * You need to take into account all the - and + signs before the number
    * If there are no numbers in the string, the function must return 0
    * You are not allowed to use long
    * You are not allowed to declare new variables of “type” array
    * You are not allowed to hard-code special values
    * Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
    * We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM
    * We will use GCC version 5 or above to compile - WARNING: it’s the only time you will use GCC 5, we highly recommend to create a new virtual machine for this task or use one of our container below.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

11. Don't hate the hacker, hate the code

Create a program that generates random valid passwords for the program 101-crackme.

    * You are allowed to use the standard library
    * You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
    * man srand, rand, time
    * gdb and objdump can help


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
