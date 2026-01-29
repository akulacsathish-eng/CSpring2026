#include <stdio.h>

int main(void) {
    double income, tax;

    printf("Enter yearly income: ");
    scanf("%lf", &income);

    if (income < 0.0) {
        printf("Invalid income.\n");
        return 0;
    }

    if (income <= 10000.0) {
        tax = 0.0;
    } else if (income <= 40000.0) {
        tax = income * 0.10;
    } else {
        tax = income * 0.20;
    }

    printf("Income: $%.2f\n", income);
    printf("Tax owed: $%.2f\n", tax);

    return 0;
}
