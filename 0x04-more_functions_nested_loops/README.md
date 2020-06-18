# 0x04-more_functions_nested_loops

In this project we will do the same as with the previous ones, each prototype they provide us (function declaration) will be treated as a "main" function where it controls the input and output of the functions. The "main" function only returns its return value to the environment that is calling it.

Clearly, this will be done in the functions that require it, since the difficulty of the exercises increases as you progress, it is unlikely that these conditions are required in the first 5 or 6 exercises.

***Note: Keep in mind that we will try to make the code as efficient as possible, we will try to increase the documentation when necessary. That must have been done before but due to certain requirements of holberton where: "Each function cannot break 50 lines" prevent us from having a rich and satisfactory documentation. We are also applying good code or clean code, defining good names for the variables (for which they are determined to do or perform), this is also done for each function we create ... although there is much more to learn, but we try do the best we can.***

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

0. Write a function that checks for uppercase character.
* Prototype: int _isupper(int c);
* Returns 1 if c is uppercase.
* Returns 0 otherwise.

1. Write a function that checks for a digit (0 through 9).
* Prototype: int _isdigit(int c);
* Returns 1 if c is a digit.
* Returns 0 otherwise.

2. Write a function that multiplies two integers.
* Prototype: int mul(int a, int b);

3. Write a function that prints the numbers, from 0 to 9, followed by a new line.
* Prototype: void print_numbers(void);
* You can only use _putchar twice in your code.

4. Write a function that prints the numbers, from 0 to 9, followed by a new line.
* Prototype: void print_most_numbers(void);
* Do not print 2 and 4.
* You can only use _putchar twice in your code.

5. Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
* Prototype: void more_numbers(void);
* You can only use _putchar three times in your code.

6. Write a function that draws a straight line in the terminal.
* Prototype: void print_line(int n);
* You can only use _putchar function to print.
* Where n is the number of times the character _ should be printed.
* The line should end with a \n.
* If n is 0 or less, the function should only print \n.

7. Write a function that draws a diagonal line on the terminal.
* Prototype: void print_diagonal(int n);
* You can only use _putchar function to print.
* Where n is the number of times the character \ should be printed.
* The diagonal should end with a \n.
* If n is 0 or less, the function should only print a \n.

8. Write a function that prints a square, followed by a new line. 
* Prototype: void print_square(int size);
* You can only use _putchar function to print.
* Where size is the size of the square.
* If size is 0 or less, the function should print only a new line.
* Use the character # to print the square.

***Exercises called advanced (They seem to be a little more difficult)***

9. The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.
Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
*Each number or word should be separated by a space.
*You are allowed to use the standard library.

10. Write a function that prints a triangle, followed by a new line.
* Prototype: void print_triangle(int size);
* You can only use _putchar function to print.
* Where size is the size of the triangle.
* If size is 0 or less, the function should print only a new line.
* Use the character # to print the triangle.

11. The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
* You are allowed to use the standard library.
* Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm.

12. Write a function that prints an integer.
* Prototype: void print_number(int n);
* You can only use _putchar function to print.
* You are not allowed to use long.
* You are not allowed to use arrays or pointers.
* You are not allowed to hard-code special values.

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
