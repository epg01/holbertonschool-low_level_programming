# 0x0A. C - argc, argv

It is possible to pass some values from the command line to your C programs when they are executed. These values are called command line arguments and many times they are important for your program especially when you want to control your program from outside instead of hard coding those values inside the code.

The command line arguments are handled using main() function arguments where argc refers to the number of arguments passed, and argv[] is a pointer array which points to each argument passed to the program. Following is a simple example which checks if there is any argument supplied from the command line and take action accordingly.

### The exercises of this project.
**Exercise called mandatory**

**0. It ain't what they call you, it's what you answer to**

Write a program that prints its name, followed by a new line.

    * If you rename the program, it will print the new name, without having to compile it again
    * You should not remove the path before the name of the program

**1. Silence is argument carried out by other means**

Write a program that prints the number of arguments passed into it.

    * Your program should print a number, followed by a new line

**2. The best argument against democracy is a five-minute conversation with the average voter**

Write a program that prints all arguments it receives.

    * All arguments should be printed, including the first one
    * Only print one argument per line, ending with a new line

**3. Neither irony nor sarcasm is argument**

Write a program that multiplies two numbers.

    * Your program should print the result of the multiplication, followed by a new line
    * You can assume that the two numbers and result of the multiplication can be stored in an integer
    * If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

**4. To infinity and beyond**

Write a program that adds positive numbers.

    * Print the result, followed by a new line
    * If no number is passed to the program, print 0, followed by a new line
    * If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
    * You can assume that numbers and the addition of all the numbers can be stored in an int

***Exercises called advanced (They seem to be a little more difficult)***

**5. Minimal Number of Coins for Change**

Write a program that prints the minimum number of coins to make change for an amount of money.

    * Usage: ./change cents
    * where cents is the amount of cents you need to give back
    * if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1 you should use atoi to parse the parameter passed to your program
    * If the number passed as the argument is negative, print 0, followed by a new line
    * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

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
