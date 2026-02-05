#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c avoids newline issue

    printf("Enter second number: ");
    scanf("%d", &b);

    if (op == '+') {
        printf("Result = %d\n", a + b);
    } else if (op == '-') {
        printf("Result = %d\n", a - b);
    } else if (op == '*') {
        printf("Result = %d\n", a * b);
    } else if (op == '/') {
        if (b != 0)
            printf("Result = %d\n", a / b);
        else
            printf("Error: Division by zero\n");
    } else if (op == '%') {
        if (b != 0)
            printf("Result = %d\n", a % b);
        else
            printf("Error: Modulo by zero\n");
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
