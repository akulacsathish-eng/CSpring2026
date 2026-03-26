#include <stdio.h>


int power(int base, int exp) {
    // Base case
    if (exp == 0) {
        return 1;
    }

    // Recursive case
    return base * power(base, exp - 1);
}

int main() {
    int base = 2, exp = 5;

    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}