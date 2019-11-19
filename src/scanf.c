/* scanf.c: practice scanf function
 *
 * format:
 *   scanf("string", &var1, &var2, ...)
 *
 * example:
 *   please enter 2 number (Separated by blank): 1 2
 *   sum: 1 + 2 = 3
 *   please enter 2 number (Separated by comma): 3, 4
 *   sum: 3 + 4 = 7
 *
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    /* getchar & putchr */
    char ch;
    printf("please enter a character: ");
    ch = getchar();
    printf("the character is %c:", ch);
    putchar('\n');

    /* getche & getch (Windows) */

    /*
     * printf("please enter a character: ");
     * ch = getche();
     * printf("the character is %c:", ch);
     */

    /* printf("\n");

     * printf("please enter a character: ");
     * ch = getch();
     * printf("the character is %c:", ch);
     */

    int a, b;
    printf("please enter 2 number (Separated by blank): ");
    /* var must be address */
    scanf("%d %d", &a, &b);
    printf("sum: %d + %d = %d\n", a, b, a+b);

    printf("please enter 2 number (Separated by comma): ");
    /* var must be address */
    scanf("%d, %d", &a, &b);
    printf("sum: %d + %d = %d\n", a, b, a+b);

    printf("\n");
    printf("please enter a character: ");
    /* var must be address */
    scanf("%c", &ch);
    printf("ch = %c, ASCII code is %d\n", ch, ch);

    printf("Enter is CR(ASCII=13) + LF(ASCII=10).\n");
    printf("Since you press 'enter' in the previous example,\n");
    printf("which can not be convert to interger, will be save in buffer.\n");
    printf("To avoid of this problem, you should add a space before %%c\n");

    printf("please enter a character: ");
    /* var must be address */
    scanf(" %c", &ch);
    printf("ch = %c, ASCII code is %d\n", ch, ch);

    printf("Or you can use fflush to clear the buffer (not recommand)\n");
    /* stdin: Standard Input*/
    /* fflush(stdin) */;

    /* string */
    char str[10];
    /* str is a address */
    printf("please enter a string (length <= 10): ");
    scanf("%s", str);
    printf("string = %s\n", str);

    return 0;
}
