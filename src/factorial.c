/* factorial.c: practice do while and recursive */

#include <stdio.h>
# include <stdlib.h>

/* prototype */
int factorial(int);
int factorial_recursive(int);

int main(void){
    int n;
    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    factorial(n);

    printf("\n");

    printf("recursive: n! = %d", factorial_recursive(n));

    return 0;
}

int factorial(int n){
    if (n > 1) {
        int res = 1;
        do {
            res *= n;
            n -= 1;
        }
        while(n > 1);
        printf("n! = %d", res);
    } else if (n == 1) {
        printf("n! = %d", 0);
    } else {
        printf("Invalid %d, requires positive integer", n);
    }
    return 0;
}

int factorial_recursive(int n){
    if (n > 0) {
        return n * factorial_recursive(n - 1);
    } else {
        return 1;
    }
}
