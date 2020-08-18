# 0x0B. C - malloc, free


Variables and vectors in C occupy a predetermined size, they cannot vary it during the execution of the program.
By means of pointers, memory can be reserved or released dynamically , that is, as needed. There are several standard functions for this, from the library <stdlib.h>

The malloc function is used to request a block of memory of the size supplied as a parameter. Returns a pointer to the granted memory zone:

> void * malloc (unsigned number_of_bytes);

The size is specified in bytes. The granted memory area is guaranteed not to be occupied by any other variables or areas returned by malloc .
If malloc is unable to grant the block (eg not enough memory), it returns a null pointer.

**Void pointers**

The malloc function returns a nonspecific pointer, which does not point to a particular data type. In C these untyped pointers are declared as void *
Many functions that return memory addresses use the void * pointers . A void * pointer can be converted to any other kind of pointer:

> char * ptr = (char *) malloc (1000);

**Sizeof operator**

The problem with malloc is knowing how many bytes you want to reserve. If you want to reserve an area for ten integers, you will have to multiply ten by the size of one integer.
The size in bytes of an element of type T is obtained with the expression

> sizeof ( T )

> The size of a char is always 1 (one).

**Free function**

When a memory area reserved with malloc is no longer needed, it can be freed using the free function .

> void free (void * ptr);

ptr is a pointer of any type that points to an area of ​​memory previously reserved with malloc .
If ptr targets an improper memory zone, the effects can be disastrous, just as if the same zone is freed twice. 


### The exercises of this project.
**Exercise called mandatory**

**0. Float like a butterfly, sting like a bee**

Write a function that creates an array of chars, and initializes it with a specific char.

    * Prototype: char *create_array(unsigned int size, char c);
    * Returns NULL if size = 0
    * Returns a pointer to the array, or NULL if it fails
    
**1. The woman who has no imagination has no wings**

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    * Prototype: char *_strdup(char *str);
    * The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
    * Returns NULL if str = NULL
    * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

**2. He who is not courageous enough to take risks will accomplish nothing in life**

Write a function that concatenates two strings.

    * Prototype: char *str_concat(char *s1, char *s2);
    * The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated if NULL is passed, treat it as an empty string
    * The function should return NULL on failure
    
**3. If you even dream of beating me you'd better wake up and apologize**

Write a function that returns a pointer to a 2 dimensional array of integers.

    * Prototype: int **alloc_grid(int width, int height);
    * Each element of the grid should be initialized to 0
    * The function should return NULL on failure
    * If width or height is 0 or negative, return NULL

**4. It's not bragging if you can back it up **

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

    * Prototype: void free_grid(int **grid, int height);
    * Note that we will compile with your alloc_grid.c file. Make sure it compiles.

**5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**

Write a function that concatenates all the arguments of your program.

    * Prototype: char *argstostr(int ac, char **av);
    * Returns NULL if ac == 0 or av == NULL
    * Returns a pointer to a new string, or NULL if it fails
    * Each argument should be followed by a \n in the new string


***Exercises called advanced (They seem to be a little more difficult)***

**6. I will show you how great I am**

Write a function that splits a string into words.

    + Prototype: char **strtow(char *str);
    * The function returns a pointer to an array of strings (words)
    * Each element of this array should contain a single word, null-terminated
    * The last element of the returned array should be NULL
    * Words are separated by spaces
    * Returns NULL if str == NULL or str == ""
    * If your function fails, it should return NULL

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
