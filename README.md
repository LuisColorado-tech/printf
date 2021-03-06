## _printf

_printf converts, formats, and prints its arguments on the standard output

under control of the format. It returns the number of characters printed



## Starting π



_To get your own copy of _printf() just download and add the following files to your project:_



holberton.h

print_c.c

_putchar.c

_printf.c





### Pre-requisites π



_The current version of printf() has been tested and developed under:_



```

gcc (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4

```

_This version of printf() has been compiled using the following flags:_



```

-Wall -Werror -Wextra -pedantic

```

### Installation π§



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



Identifierβ-βFormatβ-βββ  Useββ-βββ      Example

ββββββ      Specifier

β   %ββββββ    c       Single Characterβ A, B, a, b.

β   %ββββββ    s       A stringβββββ    Hello world

β   %ββββββ    i       An Integerββββ   1, 2, 3098, 746383

β   %ββββββ    d       An integerββββ   1, 2, 3098, 746383

β   %ββββββ    %β      A percentage(%)β        %

ββββββββββββ               symbol



**Examples:**


```
ββββ**Input**βββββ                     **Output**
```


if variable 't' is string type and stores "World"
```
_printf("Hello %s," t);ββ               Hello World
```


if variable 't' stores a char 'Z'
```
_printf("Hello %c," t); ββ              Hello Z
```


if variable 't' is int type and stores 1200
```
_printf("Hello %i," t); ββ              Hello 1200
```


if variable 't' is int type and stores 1200
```
_printf("Hello %d," t); ββ              Hello 1200
```


printing a percentage (%) symbol
```
_printf("Hello %%"); β                  Hello %
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





## Coded with π οΈ:



C language





## Version π



1.0





## Authors βοΈ



 Luis Colorado, 2268@holbertonschool.com - Julian Tabares, 2865@holbertonschool.com.





## License π



Open



## Flow chart

![header image](https://github.com/LuisColorado-tech/printf/blob/main/test/DF.jpg) 