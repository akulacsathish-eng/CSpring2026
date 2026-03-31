#include<stdio.h>
#include<stdlib.h> // rand funciton
#include<time.h> //seed the random number
void numguesser(int num)
{
    if(num == 1)
    {
        printf("Numbah 1");
    }
    else if(num ==2)
        printf("Numbah 2");
    else if(num ==3)
        printf("Numbah 3");
    else if(num ==4)
        printf("Numbah 4");
    else if(num ==5)
        printf("Numbah 5");
    else if(num ==6)
        printf("Numbah 6"); 
    else    
        printf("Invalid number");   
}

void main()
{
    srand(time(NULL));
    int num = rand()%6+1;
    numguesser(num);
}
