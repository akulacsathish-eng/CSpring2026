
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num = rand()%6+1;
    
    printf("%d",num);
}
