#include <stdio.h>

int main() {
    int a, b;
    char op = 'a';
    while(op != 'q')
    {
        printf("Enter operator (+, -, *, /, %%) q for quit: ");
        scanf(" %c", &op);

        printf("Enter first number: ");
        scanf("%d", &a);
        
        printf("Enter second number: ");
        scanf("%d", &b);

        switch (op) {
            case '+':
                printf("Result = %d\n", a + b);
                break;

            case '-':
                printf("Result = %d\n", a - b);
                break;

            case '*':
                printf("Result = %d\n", a * b);
                break;

            case '/':
                if (b != 0)
                    printf("Result = %d\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;

            case '%':
                if (b != 0)
                    printf("Result = %d\n", a % b);
                else
                    printf("Error: Modulo by zero\n");
                break;
            case 'q':
                printf("Thank you!");
                break;

            default:
                printf("Invalid operator\n");
        }
    }
    return 0;
}
