#include <stdio.h>

int main() {
    int arr[6] = {12, 7, 25, 3, 18, 10};
    int i;
    int sum = 0;
    int min = arr[0];
    int max = arr[0];

    for (i = 0; i < 6; i++) {
        sum += arr[i];

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    float avg = sum / 6.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}