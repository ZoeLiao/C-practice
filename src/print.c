/* print.c: practice printf function
 *
 * output:
 *
 *   Character && Strint:
 *   %c: A character, e.g. a
 *   %s: A string, e.g. string
 *
 *   Integer:
 *   %d: A decimal integer, e.g. 1
 *   %ld: A long integer, e.g. 2147483647
 *   %f: A float integer, e.g. (%2.2f) 2147483648.000000 = 2147483648.00
 *   %e: A float integer (type: Euler's num2ber), e.g. 2.147484e+09
 *   %o: A unsigned octal integer, e.g. -16 = 37777777760
 *   %u: A unsigned decimal integer, e.g. -16 = 4294967280
 *   %x: A unsigned hexadecimal integer, e.g. 16 = 10
 *
 *   Flags:
 *   Align text right (default): num =      1 (%6d)
 *   Align text left (use %-d): num = 1      (%-6d)
 *   Display sign (use %+d): +1 (%+d)
 *   Display space if it is positive (use % d):  1 (% d)
 *   Pad a numeric value with leading zeros (use %0): 000016.00 (%02.2f)%
 */
#include <stdio.h>


int main(void){
    printf("Character && Strint:\n");
    printf("%%c: A character, e.g. %c\n", 'a');
    char str[] = "string";
    printf("%%s: A string, e.g. %s\n", str);

    printf("\nInteger:\n");
    printf("%%d: A decimal integer, e.g. %d\n", 1);
    long num = 2147483647;
    printf("%%ld: A long integer, e.g. %ld\n", num);

    float float_num = (float)num;
    printf("%%f: A float integer, e.g. (%%2.2f) %f = %2.2f\n", float_num, float_num);
    printf("%%e: A float integer (type: Euler's float_number), e.g. %e\n", float_num);

    int negative_num = -16;
    printf("%%o: A unsigned octal integer, e.g. %d = %o\n", negative_num, negative_num);
    printf("%%u: A unsigned decimal integer, e.g. %d = %u\n", negative_num, negative_num);
    unsigned int sixteen = 16;
    printf("%%x: A unsigned hexadecimal integer, e.g. %d = %x\n", sixteen, sixteen);

    printf("\nFlags:\n");

    printf("Align text right (default): num = %6d (%%6d)\n", 1);
    printf("Align text left (use %%-d): num = %-6d (%%-6d)\n", 1);

    printf("Display sign (use %%+d): %+d (%%+d)\n", 1);
    printf("Display space if it is positive (use %% d): % d (%% d)\n", 1);
    printf("Pad a numeric value with leading zeros (use %%0): %09.2f (%%02.2f)", (float)sixteen);
    return 0;
}
