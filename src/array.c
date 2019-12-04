/* array.c: practice array
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int formal[4] = {87, 88, 92, 94};
    float same_variables[4] = {0.0};
    double without_size[] = {1, 2, 3, 4}; 
    printf("size of int array (4 variables): %lu\n", sizeof(formal));
    printf("size of float array (4 variables): %lu\n", sizeof(same_variables));
    printf("size of double array (4 variables): %lu\n", sizeof(without_size));

    char string[3];
    int i;
    for (i=0; i<3; i++){
        printf("please input a letters: ");
        scanf(" %c", &string[i]);
    }

    for (i=0; i<3; i++){
        printf("string[%d] = %c\n", i, string[i]);
    }

    return 0;
}
