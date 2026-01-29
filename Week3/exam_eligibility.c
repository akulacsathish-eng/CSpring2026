#include <stdio.h>

int main(void) {
    double attendance, quizAvg;

    printf("Enter attendance percentage: ");
    scanf("%lf", &attendance);

    printf("Enter quiz average: ");
    scanf("%lf", &quizAvg);

    if (attendance <= 70.0) 
    {
        printf("Not eligible: attendance too low.\n");
    } else if (quizAvg < 60.0) 
    {
        printf("Not eligible: quiz average too low.\n");
    } else 
    {
        printf("Eligible for the exam.\n");
    }

    return 0;
}
