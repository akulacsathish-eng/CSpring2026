#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Input
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        //printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Output
    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}