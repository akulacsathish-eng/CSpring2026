#include <stdio.h>

int main(void) {
    double weight, baseCost, finalCost;
    char member;

    printf("Enter package weight (lbs): ");
    scanf("%lf", &weight);

    printf("Member? (Y/N): ");
    scanf(" %c", &member);

    if (weight <= 0.0) {
        printf("Invalid weight.\n");
        return 0;
    }

    if (weight <= 1.0) {
        baseCost = 4.99;
    } else if (weight <= 5.0) {
        baseCost = 9.99;
    } else {
        baseCost = 14.99;
    }

    finalCost = baseCost;

    if (member == 'Y' || member == 'y') {
        finalCost = baseCost * 0.90;  // 10% discount
    }

    printf("Base cost : $%.2f\n", baseCost);
    printf("Final cost: $%.2f\n", finalCost);

    return 0;
}
