#include <stdio.h>

//int sum(int a, int b);
//float average(int a, int b);


int sum(int a, int b)
{
    return a + b;
}

float average(int a, int b)
{
    int s;
    s = sum(a, b);
    return s / 2.0;
}

int main()
{
    printf("Average = %.2f\n", average(10, 20));
    return 0;
}
