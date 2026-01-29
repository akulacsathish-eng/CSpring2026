#include <stdio.h>

int main(void) {
    int temp;
    char home;

    printf("Enter current temperature (F): ");
    scanf("%d", &temp);

    printf("Is someone home? (Y/N): ");
    scanf(" %c", &home);

    if (temp < 40 || temp > 100) {
        printf("Invalid temperature.\n");
    } else if (home == 'N' || home == 'n') {
        printf("Eco mode ON (no one home).\n");
    } else if (temp < 68) {
        printf("Heat ON.\n");
    } else if (temp > 75) {
        printf("Air conditioning ON.\n");
    } else {
        printf("System OFF (comfortable range).\n");
    }

    return 0;
}
