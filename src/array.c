/* array.c: practice array
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
#define ROW 2
#define COL 3

void sum_matrix(int arr_a[][COL], int arr_b[][COL]);

int main(void) {

    int formal[SIZE] = {87, 88, 92, 94};
    float same_variables[SIZE] = {0.0};
    double without_size[] = {1, 2, 3, 4}; 
    printf("size of int array (%d variables): %lu\n", SIZE, sizeof(formal));
    printf("size of float array (%d variables): %lu\n", SIZE, sizeof(same_variables));
    printf("size of double array (%d variables): %lu\n", SIZE, sizeof(without_size));

    char string[3];
    int i;
    for (i=0; i<3; i++){
        printf("please input a letters: ");
        scanf(" %c", &string[i]);
    }

    for (i=0; i<3; i++){
        printf("string[%d] = %c\n", i, string[i]);
    }

    // Two-dimensional array
    int sale[][3] = {{1, 2, 3},
                      {4, 5, 6}};

    int matrix_a[ROW][COL] = {{1, 1, 1}, {3, 3, 3}};
    int matrix_b[ROW][COL] = {{1, 1, 5}, {4, 4, 4}};

    // call by address instead of values
    sum_matrix(matrix_a, matrix_b);
    return 0;
}

void sum_matrix(int arr_a[][COL], int arr_b[][COL]){
    int i, j;
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("sum = %d\n", arr_a[i][j] + arr_b[i][j]);
        }
    }
}
