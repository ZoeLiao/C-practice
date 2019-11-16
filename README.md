# C-practice

## Scripts:
- base.c: warm up
- print.c: practice printf function

## How to run a C script:
- `cc -o <filename> <program_name.c>`
- `.<filename>`

## Notes

### type
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
