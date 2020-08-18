# 0x01-variables_if_else_while.  :yum:

A series of exercises put on by the Holberton Academy are shown, where the first eleven exercises are called mandatory and the following are called advanced. (**A little harder than the previous ones**).

The exercises that were performed, all of them were done with a **_single loop_** and a **_single putchar_** function. It should also be noted that there was very little documentation in the programs since, due to the requirement of the betty style, it does not allow having more than 50 lines of code in a function, but it is about making the ***"code as clean"*** as possible.

***note: In exercise 100-print comb3.c, symbolic constants were used for a better reading of the program, since it is a bad practice to bury numbers. Since each project is trying to make code cleaner and more efficient.*** :rocket:

### requirements 📋

The code is compiled with the ```gcc 4.8.4``` compiler using the ```-Wall -Werror -Wextra``` and ```-pedantic``` flags, therefore to get the executable file use the following command.

> gcc Filename

or for the second command.

> gcc Filename -o executable-file-name

The first command gives us an executable with the name of ```a.out``` and the second with the name of ```executable-file-name```, to run the program use the following command.

> ./a.out

or for the second command.

> ./executable-file-name

### example :metal:

Exercise ```9-print comb.c``` was compiled, for this, keyboards the following.

> gcc 9-print comb.c

Next, we execute the code.

> ./ a.out

which gives us the following output.

> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

***Note: The most interesting is the following if, if we are in a terminal and execute the following code.***

> /9-print_comb | cat -e | less

it is appreciated that a dollar sign appears, this means that there are no space characters (tab), at the end of the character '9' the program executes a line break.

> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$

## About the exercises.
In the previous project I did not show the exercises that were in the repository, at a certain point I do not see it as prudent, but for people who see it and possibly clone it, it would be good for them to know these exercises for their possible resolution.

0. Positive anything is better than negative nothing mandatory 
 
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

    You can find the source code here
    The variable n will store a different value every time you will run this program
    You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
    The output of the program should be:
        The number, followed by
            if the number is greater than 0: is positive
            if the number is 0: is zero
            if the number is less than 0: is negative
        followed by a new line
        
 1. The last digit 

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

    You can find the source code here
    The variable n will store a different value every time you run this program
    You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
    The output of the program should be:
        The string Last digit of, followed by
        n, followed by
        the string is, followed by
            if the last digit of n is greater than 5: the string and is greater than 5
            if the last digit of n is 0: the string and is 0
            if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
        followed by a new line

2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game 

Write a program that prints the alphabet in lowercase, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar twice in your code

 3. alphABET 
 
 Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar three times in your code

4. When I was having that alphabet soup, I never thought that it would pay off 

Write a program that prints the alphabet in lowercase, followed by a new line.

    Print all the letters except q and e
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar twice in your code

5. Numbers 

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

    All your code should be in the main function

 6. Numberz 
 
 Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

    You are not allowed to use any variable of type char
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar twice in your code
    All your code should be in the main function

 7. Smile in the mirror
 
 Write a program that prints the lowercase alphabet in reverse, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar twice in your code

8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar three times in your code

9. Patience, persistence and perspiration make an unbeatable combination for success 

Write a program that prints all possible combinations of single-digit numbers.

    Numbers must be separated by ,, followed by a space
    Numbers should be printed in ascending order
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar four times maximum in your code
    You are not allowed to use any variable of type char

10. 00...99

Write a program that prints the numbers from 00 to 99.

    Numbers must be separated by ,, followed by a space
    Numbers should be printed in ascending order, with two digits
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar five times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function
    
***Advanced type exercise***

11. Inventing is a combination of brains and materials. The more brains you use, the less material you need 

Write a program that prints all possible different combinations of two digits.

    Numbers must be separated by ,, followed by a space
    The two digits must be different
    01 and 10 are considered the same combination of the two digits 0 and 1
    Print only the smallest combination of two digits
    Numbers should be printed in ascending order, with two digits
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar five times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function

 12. The success combination in business is: Do what you do better... and: do more of what you do...
 
 Write a program that prints all possible different combinations of three digits.

    Numbers must be separated by ,, followed by a space
    The three digits must be different
    012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
    Print only the smallest combination of three digits
    Numbers should be printed in ascending order, with three digits
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar six times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function

 13. Software is eating the World 
 
 Write a program that prints all possible combinations of two two-digit numbers.

    The numbers should range from 0 to 99
    The two numbers should be separated by a space
    All numbers should be printed with two digits. 1 should be printed as 01
    The combination of numbers must be separated by comma, followed by a space
    The combinations of numbers should be printed in ascending order
    00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar eight times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function





Authors ✒️

* Emmanuel Palacio Gaviria. 

Gratitude 🎁

To my Master:
* [Fredy Mena Andreda](https://github.com/xfry)

To my friends:
* [Evert escalante](https://github.com/Evertcolombia)     My Master.
* [Jordan Buitrago](https://github.com/jordanbsandoval)   My Master.
* [Santiago aldana](https://github.com/paisap)            My Master.
* [Nicolas Forero](https://github.com/NickForero11)       My Master.
* [Daniel Perez](https://github.com/d1sd41n)              My Master.
* [Juan Olivares](https://github.com/JuanOlivares1)       My Master.

two very important people in this academy:
* Andrea Jaramillo.
* Laura Restrepo.

And finally to
* [Holberton](https://www.holbertonschool.com/co)  :yellow_heart:
