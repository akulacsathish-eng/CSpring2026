#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    printf("Average = %.2f\n", average(10, 20, 30));
    return 0;
}

float average(int a, int b, int c)
{
    float avg;
    avg = (a + b + c) / 3.0;
    return avg;
}