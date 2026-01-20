#include <stdio.h>

int main(void)
{
    int pos = 42;
    int neg = -42;
    unsigned int u = 255;
    double f = 10.0;

    printf("==== Alignment (- flag) ====\n");
    printf("|%-6d|\n", pos);
    printf("|%6d|\n\n", pos);

    printf("==== Sign control (+ and space flags) ====\n");
    printf("plus flag   : %+d\n", pos);
    printf("space flag  : % d\n", pos);
    printf("negative    : %+d\n\n", neg);

    printf("==== Zero padding (0 flag) ====\n");
    printf("zero padded : %06d\n", pos);
    printf("left align  : %-06d  (0 ignored when - is present)\n\n", pos);

    printf("==== Alternate form (# flag) ====\n");
    printf("hex normal  : %x\n", u);
    printf("hex alt     : %#x\n", u);
    printf("oct normal  : %o\n", u);
    printf("oct alt     : %#o\n", u);
    printf("float normal: %.0f\n", f);
    printf("float alt   : %#.0f\n\n", f);

    printf("==== Combined flags ====\n");
    printf("%#08x\n", 31);   // prefix + zero pad + width

    return 0;
}
