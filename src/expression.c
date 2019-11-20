/* expression.c: introduce expression 
 *
 */
# include <stdio.h>
# include <stdlib.h>
#include <math.h>
int main(void){
    int a = 0,
        b = 3,
        c = 2;

    printf("a = %d, !a = %d\n", a, !a);
    printf("b = %d, !b = %d\n", b, !b);

    printf("%%: mod (integer)\n");
    printf("Remainder of %d %% %d = %d\n", b, c, b%c);

    printf("fmod: returns the remainder of x divided by y.\n");
    float e = 1.2;
    int   f = 3;
    printf("Remainder of %f / %d is %lf\n", e, f, fmod(e, f));

    /* if else */
    int num1, num2, larger;
    printf("Please enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    larger = num1 > num2 ? num1 : num2;
    printf("The larger is %d\n", larger);

    /* switch */
    char grade;
    printf("Please enter A, B or C: ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'A':
           printf("Good Job! Your grade is %c", grade); 
           break;
        case 'B':
           printf("Your grade is %c", grade); 
           break;
        default:
           printf("It's Ok. Your grade is %c", grade); 
           break;

    }

    /* goto */
    printf("\n");
    printf("Practice 'goto' (Not Recommended)\n");
    int i = 0,
        sum = 0;
    start:
        printf("i= %d, sum = %d\n", i, sum);
        i++;
        sum += i;
        if(sum <= 50){
            printf("i++\n");
            goto start;
        }
        printf("sum = %d\n", sum);

    return 0;

}
