# 0x08. C - Recursion 🍃

Recursion is a powerful principle that allows something to be defined in terms ofsmaller instances of itself. Perhaps there is no better way to appreciate the signifi-cance of recursion than to look at the mysterious ways nature uses it. Think of thefragile leaf of a fern, in which each individual sprig from the leaf’s stem is just asmaller copy of the overall leaf. Think of the repeating patterns in a reflection, inwhich two shiny objects reflect each other. Examples like these convince us thateven though nature is a great force, in many ways it has a paradoxical simplicitythat is truly elegant. The same can be said for recursive algorithms; in many ways,recursive algorithms are simple and elegant, yet they can be extremely powerful (***Mastering Algorithms with C, Chapter Recursion***)

### The exercises of this project.
**Exercise called mandatory**

**0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**

Write a function that prints a string, followed by a new line.

    * Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.

**1. Why is it so important to dream? Because, in my dreams we are together**

Write a function that prints a string in reverse.

    * Prototype: void _print_rev_recursion(char *s)
    
**2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**

Write a function that returns the length of a string.

    * Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

**3. You mustn't be afraid to dream a little bigger, darling**

Write a function that returns the factorial of a given number.

    * Prototype: int factorial(int n);
    * If n is lower than 0, the function should return -1 to indicate an error
    * Factorial of 0 is 1

**4. Once an idea has taken hold of the brain it's almost impossible to eradicate**

Write a function that returns the value of x raised to the power of y.

    * Prototype: int _pow_recursion(int x, int y);
    * If y is lower than 0, the function should return -1

FYI: The standard library provides a different function: pow. Run man pow to learn more

**5. Your subconscious is looking for the dreamer**

Write a function that returns the natural square root of a number.

    *Prototype: int _sqrt_recursion(int n);
    * If n does not have a natural square root, the function should return -1

FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more

**6. Inception. Is it possible?**

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

    * Prototype: int is_prime_number(int n);

**7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything**

Write a function that returns 1 if a string is a palindrome and 0 if not.

    * Prototype: int is_palindrome(char *s);
    * An empty string is a palindrome

***Exercises called advanced (They seem to be a little more difficult)***

**8. Inception. Now, before you bother telling me it's impossible...**

Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

    * Prototype: int wildcmp(char *s1, char *s2);
    * s2 can contain the special character *.
    * The special char * can replace any string (including an empty string)


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
