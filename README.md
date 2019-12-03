# C-practice

## Scripts:
- base.c: warm up
- print.c: practice printf function
- scanf.c: practice getchar, putchar, and scanf function

## How to run a C script:
- `cc -o <filename> <program_name.c>`
- `./<filename>`

## Notes

### Type
Type          | bytes | range |
--------------|:-----:|:-----:|
long int      |   4   | - 2147483648 ~ 2147483647 |
int           |   4   | - 2147483648 ~ 2147483647 |
short int     |   2   | - 32768 ~ 32767 |
char          |   1   | 0 ~ 255 |
float         |   4   | 1.2e-38 ~ 3.4e38 |
double        |   8   | 2.2e-308 ~ 1.8e308 |

- signed (+/-) & unsigned (+)

Type               | bytes | range |
-------------------|:-----:|:-----:|
unsigned long int  |   4   | 0 ~ 4294967295 |
unsigned int       |   4   | 0 ~ 4294967295 |
unsigned short int |   2   | 0 ~ 65535 |

- Note: Overflow appears when using improper type

## `scanf`
- Read formatted data from stdin
- type: %c, %d, %f, %lf, %s, %o (octal integer), %x (hexadecimal integer)

## The Standard Files
Standard File   | File Pointer  |  Device   |
----------------|:--------------:|:---------:|
Standard input  |   stdin   | Keyboard |
Standard output	|   stdout	| Screen |
Standard error	|   stderr  | Your screen |

## Expressions (operand & operator):
- expressions consist of two types of components:
- Operand（運算元）: the objects that are manipulated. e.g., 1, 2, a
    - assignment operator: `=`
- Operator（運算式）: the symbols that represent specific actions. e.g., +, -, \*, \/
- goto: Not Recommended

## Variable
- local variable, global variable, static variable.

## Function
- default - call by value: copy the actual value of an argument into the formal parameter of the function

## Preprocessor (前置處理)
- The preprocessor provides the ability for the inclusion of header files, macro (巨集) expansions, conditional compilation, and line control
- `#define`:
    - directive allows the definition of macros within the source code
    - format (uppercase):
        - `#define CNAME value`, e.g., `#define PI 3.14`
        - `#define CNAME (expression)`, e.g., `#define SQUARE(n) (n)*(n)`
    - memory:
        - `#define` is better than const
        - `#define` is worse than function
    - efficency:
        - `#define` is better than const
        - `#define` is better than function
    - Can not be changed
- `#inclue`:
    - causes the contents of a second file to be inserted into the original file
    - these included files are called copybooks or header files
    - format:
        - `#include "header file path"`
        - `#include <C package>`

# Reference:
- [https://www.tutorialspoint.com/index.htm](https://www.tutorialspoint.com/index.htm)
- [wiki](https://en.wikipedia.org/wiki/Main_Page)
- [C 語言教學手冊](https://www.books.com.tw/products/0010360466)
