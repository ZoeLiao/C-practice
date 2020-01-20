#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void print_array(int a[]);
void bubble(int a[]);
int main(void){
    int data[SIZE];
    printf("please input 10 numbers:");
    for(int i=0; i<SIZE; i++){
        scanf("%d", &data[i]);
    }

    printf("Before sorting the array: \n");
    print_array(data);
    printf("\n");
    bubble(data);
    printf("After sorting the array: \n");
    print_array(data);
}

void print_array(int a[]){
    for(int i=0; i<SIZE; i++){
        printf("%d ", a[i]);
    }
}
void bubble(int a[]){
    int i, j, tmp;
    for(i=1; i<SIZE; i++){
        for(j=0; j<(SIZE-1); j++){
            if(a[j] > a[i]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
