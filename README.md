## _printf

_printf converts, formats, and prints its arguments on the standard output

under control of the format. It returns the number of characters printed



## Starting 🚀



_To get your own copy of _printf() just download and add the following files to your project:_



holberton.h

print_c.c

_putchar.c

_printf.c





### Pre-requisites 📋



_The current version of printf() has been tested and developed under:_



```

gcc (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4

```

_This version of printf() has been compiled using the following flags:_



```

-Wall -Werror -Wextra -pedantic

```

### Installation 🔧



_To get _printf() working in your project, download and add the aforementioned files, then include holberton.h in your header._





#### Use & Examples
```
** Prototype:** int _printf(const char *format, ...);
```


**How to use it:** 
```
_printf() follows the following structure when called in a program
```
```
_printf("string to be printed %format_specifiers", argument 1, argument 2....argument n);
```


**Format Specifiers**



Identifier - Format -     Use  -         Example

            Specifier

    %          c       Single Character  A, B, a, b.

    %          s       A string         Hello world

    %          i       An Integer       1, 2, 3098, 746383

    %          d       An integer       1, 2, 3098, 746383

    %          %       A percentage(%)         %

                           symbol



**Examples:**



    **Input**                           **Output**



if variable 't' is string type and stores "World"
```
_printf("Hello %s," t);                 Hello World
```


if variable 't' stores a char 'Z'
```
_printf("Hello %c," t);                 Hello Z
```


if variable 't' is int type and stores 1200
```
_printf("Hello %i," t);                 Hello 1200
```


if variable 't' is int type and stores 1200
```
_printf("Hello %d," t);                 Hello 1200
```


printing a percentage (%) symbol
```
_printf("Hello %%");                    Hello %
```


**More examples: Using several format specifiers on the same string**



 **Input:**



if variable 't' is string type and stores "World"

if variable 'a' stores a char 'Z'

if variable 'n' is int type and stores 1200

if variable 'm' is int type and stores 72000

and printing a percentage (%) symbol


```
_printf("Hello %s, a letter: %c, completed: 40%%, minutes to go: %i, seconds to go: %d.", t, a, n, m);
```

*Output**



Hello World, a letter: Z, completed: 40%, minutes to go: 1200, seconds to go: 72000.





## Coded with 🛠️:



C language





## Version 📌



1.0





## Authors ✒️



 Luis Colorado, 2268@holbertonschool.com - Julian Tabares, 2865@holbertonschool.com.





## License 📄



Open



## Flow chart

![header image](https://github.com/LuisColorado-tech/printf/blob/main/test/DF.jpg) 