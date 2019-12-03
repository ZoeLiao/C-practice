/* include.c: practice include header files
 *
 */
#include <stdio.h>
#include "add.h" 


int main(void) {

    int a, b;
    printf("Please input 2 number (a, b): ");
    scanf("%d, %d", &a, &b);
    printf("a + b = %d", ADD(a, b));

    return 0;
}
