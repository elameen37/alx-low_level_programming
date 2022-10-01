# *0x09. C - Static libraries*

In this project, I learned what static libraries are and also practiced them
using `ar`, `ranlib`, and `nm`.

## Tests :heavy_check_mark:

## Tasks :page_with_curl:

## Creating a static library libmy.a


* **0. A library is not a luxury but one of the necessities of life**
  * [libmy.a](./libmy.a): C Static library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libmy.a`.

 * `gcc -c *.c`

 * `ar -rc libmy.a *.o`

 * `ar -t libmy.a`

0-isupper.o

0-memset.o

0-strcat.o

1-isdigit.o

1-memcpy.o

1-strncat.o

100-atoi.o

2-strchr.o

2-strlen.o

2-strncpy.o

3-islower.o

3-puts.o

3-strcmp.o

3-strspn.o

4-isalpha.o

4-strpbrk.o

5-strstr.o6-abs.o

6-abs.o

9-strcpy.o

_putchar.o

 
 * `ranlib libmy.a`

 * `nm libmy.a`


## Tasks :page_with_curl:

* **1. Without libraries what have we? We have no past and no future**
  * [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static
  library called `liball.a` from all the `.c` files in the current directory.

creat a main.c file

`gcc -std=gnu89 main.c -L. -lmy -o quote`

`./quote`
