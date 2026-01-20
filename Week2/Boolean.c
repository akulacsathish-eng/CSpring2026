#include <stdio.h>
#include <stdbool.h>   // provides bool, true, false

int main(void)
{
    int a, b;

    printf("Enter two integers a and b: ");
    scanf("%d %d", &a, &b);

    /* Relational operators (results are boolean: 0 = false, 1 = true) */
    bool eq  = (a == b);
    bool ne  = (a != b);
    bool gt  = (a >  b);
    bool lt  = (a <  b);
    bool ge  = (a >= b);
    bool le  = (a <= b);

    printf("\n--- Relational Operators (0=false, 1=true) ---\n");
    printf("a == b : %d\n", eq);
    printf("a != b : %d\n", ne);
    printf("a >  b : %d\n", gt);
    printf("a <  b : %d\n", lt);
    printf("a >= b : %d\n", ge);
    printf("a <= b : %d\n", le);

    /* Logical operators (AND, OR, NOT) */
    bool both_positive = (a > 0) && (b > 0);
    bool either_zero   = (a == 0) || (b == 0);
    bool not_equal     = !(a == b);

    printf("\n--- Logical Operators (0=false, 1=true) ---\n");
    printf("(a > 0)  && (b > 0) : %d\n", both_positive);
    printf("(a == 0) || (b == 0): %d\n", either_zero);
    printf("!(a == b)           : %d\n", not_equal);

    /* Arithmetic operators */
    int sum  = a + b;
    int diff = a - b;
    int prod = a * b;

    printf("\n--- Arithmetic Operators ---\n");
    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", diff);
    printf("a * b = %d\n", prod);

    /* Division and modulus:*/
    printf("\n--- Division and Modulus (assume b != 0) ---\n");
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    /* Show operator precedence with and without parentheses */
    printf("\n--- Precedence Example ---\n");
    printf("a + b * 2     = %d\n", a + b * 2);
    printf("(a + b) * 2   = %d\n", (a + b) * 2);

    return 0;
}
