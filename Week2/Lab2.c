#include <stdio.h>

int main(void)
{
    char rating;
    int studentId;
    int age;
    int g1, g2, g3;
    double average;

   

    printf("Enter Student Rating (A/B/C): ");
    scanf(" %c", &rating);  

    printf("Enter Student ID: ");
    scanf("%d", &studentId);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Grade 1: ");
    scanf("%d", &g1);

    printf("Enter Grade 2: ");
    scanf("%d", &g2);

    printf("Enter Grade 3: ");
    scanf("%d", &g3);


    average = (g1 + g2 + g3) / 3.0;

   

    printf("\n********** Student Summary **********\n\n");

    printf("Student Rating     : %c\n", rating);
    printf("Student ID         : %d\n", studentId);
    printf("Age                : %d\n", age);
    printf("Average Grade      : %.2f\n", average);



    printf("\nAge Formatting:\n");
    printf("Normal   : %d\n", age);
    printf("Width 5  : %5d\n", age);
    printf("Zero-pad : %05d\n", age);

    return 0;
}
