#include <stdio.h>

int main() {
    int i;
    int sum = 0;

  
    for (i = 1; i <= 5; i++) {
        printf("For loop: %d\n", i);
        sum += i;
    }

    printf("Sum after for loop = %d\n\n", sum);

    sum = 0;   

  
    i = 1;
    while (i <= 5) {
        printf("While loop: %d\n", i);
        sum += i;
        i++;
    }

    printf("Sum after while loop = %d\n\n", sum);

    sum = 0;   // reset

    
    i = 1;
    do {
        printf("Do-while loop: %d\n", i);
        sum += i;
        i++;
    } while (i <= 5);

    printf("Sum after do-while loop = %d\n");

    return 0;
}