#include <stdio.h>

int add(int a, int b);   // function prototype

int main()
{
    int result;

    result = add(5, 3);   // function call

    printf("Sum = %d\n", result);

    return 0;
}
 
int add(int a, int b)    // function definition
{
    int sum;
    sum = a + b;
    return sum;
}