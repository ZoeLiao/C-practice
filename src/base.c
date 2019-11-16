/* base.c: warm up */

/* include header file */
#include <stdio.h>

/* return int and do not require any parameter */
int main(void){
    char name = 'a';
    int num = 2;
    float float_num = 3.14f;

    printf("My name is %c, I have %d cats.\n", name, num);
    if(num < 5){
        printf("The num is smaller than 5.\n");
    }
    printf("float_num=%e.\n", float_num);
    printf("float_num=%f.\n", float_num);

    char beep = '\a';
    printf("%c", beep);
    printf("ASCII of beep=%d.\n", beep);

    printf("sizeof(char)=%ld", sizeof(beep));
    return 0;
}
