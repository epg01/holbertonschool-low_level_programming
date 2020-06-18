# 0x02. C - Functions, nested loops. 👻

In this activity, more progress was made in nested cycles and in the output of characters using the putchar function, there were exercises where certain initial conditions were requested, such as:
1. A certain number of putchar that could be used.

2. Do not use the printf function, but the _putchar function made by Holberton (It is the same function as putchar).

3. At the end of printing the last character, insert a line break.

Well, with all these conditions posed in each of the exercises, I wanted to go further and place much greater demands that were:

1. *For each function, use a single loop and a single _putchar.* 😱 

2. The prototype function that holberton gave us, visualize this as if it were the main function -> to be able to treat it as follows:

3. *This function will control the entire process, that is, the input and output of the other functions.*

I played around with many styles, where the condition of the loop that controlled the "main" function was after the line break was printed, others where there weren't as many demands and used the same "main" function to control character output, not external functions were used (as they were not necessary).

At the end of this process, I was able to do almost all the exercises (I only miss the last advanced, but I missed it because I see the need to do it much more elegant, but I lack knowledge), but **!I could do the rest with my proposed requirements.¡** 😎

## About the exercises.
In the previous project I did not show the exercises that were in the repository, at a certain point I do not see it as prudent, but for people who see it and possibly clone it, it would be good for them to know these exercises for their possible resolution.

0. Write a program that prints Holberton, followed by a new line.
* The program should return 0
> ./0-holberton

> Holberton

1. Write a function that prints the alphabet, in lowercase, followed by a new line.
* Prototype: void print_alphabet(void);
* You can only use _putchar twice in your code
> ./1-alphabet

> abcdefghijklmnopqrstuvwxyz

2. Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Prototype: void print_alphabet_x10(void);
* You can only use _putchar twice in your code
> ./2-alphabet_x10 

> abcdefghijklmnopqrstuvwxyz **Note: 9 times more this outpu **

3. Write a function that checks for lowercase character.
* Prototype: int _islower(int c);
* Returns 1 if c is lowercase
* Returns 0 otherwise
> /3-islower 

> 011

4. Write a function that checks for alphabetic character.
* Prototype: int _isalpha(int c);
* Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise
> ./4-isalpha 

> 1110

You will ask yourselves. Where does this output appear from? the output is the examples that holberton places in his main conresondiente, such as for point 4 this is main. (make your own main and try them out since these functions are in the C libraries)

> #include "holberon.h"  *We can see that we do not use any C library*

>int main(void)

>{

>   print_alphabet_x10();

>    return (0);

>}

### Here are the other exercises.

5. Write a function that prints the sign of a number.
* Prototype: int print_sign(int n);
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero

6. Write a function that computes the absolute value of an integer.
* Prototype: int _abs(int);

7. Write a function that prints the last digit of a number.
* Prototype: int print_last_digit(int);
* Returns the value of the last digit

8. Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
* Prototype: void jack_bauer(void);

9. Write a function that prints the 9 times table, starting with 0.
* Prototype: void times_table(void)
***To see the output of this exercise, clone the repository and compile it. after showing all the exercises (below, I explain how to compile the programs).***

10 . Write a function that adds two integers and returns the result.
* Prototype: int add(int, int);

11. Write a function that prints all natural numbers from n to 98, followed by a new line.
* Prototype: void print_to_98(int n);
* Numbers must be separated by a comma, followed by a space
* Numbers should be printed in order
* The first printed number should be the number passed to your function
* The last printed number should be 98
* You are allowed to use the standard library

12. Write a function that prints the n times table, starting with 0.
* Prototype: void print_times_table(int n)
* If n is greater than 15 or less than 0 the function should not print anything

13. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
* You are allowed to use the standard library

14. Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
* The numbers must be separated by comma, followed by a space , 
* You are allowed to use the standard library

15. Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
* You are allowed to use the standard library


***Note: In some exercises, you can see that a function that calls another function, calls another function, I know it is a bad habit and I think the code is not so clean and efficient (I don't know, I think ...> I don't know very well on the subject), I wanted to do tests, they even have the challenge of doing it without calling another function, because I know it can ... you just have to change certain conditions and add others (it is not that difficult), but the delivery does not give me time.***

## Code to compile the programs of this repository

The code is compiled with the ```gcc 4.8.4``` compiler using the ```-Wall -Werror -Wextra``` and ```-pedantic``` flags, therefore to get the executable file use the following command.

> gcc Filename

or for the second command.

> gcc Filename -o executable-file-name

The first command gives us an executable with the name of ```a.out``` and the second with the name of ```executable-file-name```, to run the program use the following command.

> ./a.out

or for the second command.

> ./executable-file-name

Authors ✒️

* Emmanuel Palacio Gaviria. 

Gratitude 🎁

To my Master:
* [Fredy Mena Andreda](https://github.com/xfry)

two very important people in this academy:
* Andrea Jaramillo.
* Laura Restrepo.

And finally to
* [Holberton](https://www.holbertonschool.com/co)  :yellow_heart:
