#include <stdio.h>

int main() {
    int choice, n, i, j, confirm;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Sum from 1 to n\n");
        printf("2. Product from 1 to n\n");
        printf("3. Multiplication Table\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            do {
                printf("Enter a positive integer: ");
                scanf("%d", &n);
                if (n <= 0) {
                    printf("Invalid input. Number must be positive.\n");
                }
            } while (n <= 0);
        }

        if (choice == 1) {
            int sum = 0;
            for (i = 1; i <= n; i++) {
                sum += i;
            }
            printf("Sum from 1 to %d = %d\n", n, sum);
        }
        else if (choice == 2) {
            long long product = 1;
            for (i = 1; i <= n; i++) {
                product *= i;
            }
            printf("Product from 1 to %d = %lld\n", n, product);
        }
        else if (choice == 3) {
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= 10; j++) {
                    printf("%d x %d = %d\n", i, j, i * j);
                }
            }
        }
        else if (choice == 4) {
            printf("Press 1 to exit or 0 to continue: ");
            scanf("%d", &confirm);
            if (confirm == 1) {
                break;
            }
        }
        else {
            printf("Invalid menu choice.\n");
        }
    }

    return 0;
}