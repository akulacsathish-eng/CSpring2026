
#include <stdio.h>

//Write  afunction to find sum of 2 numbers entered by the user, send the numbers to function 
//calculate sum and send it back to main //and print it out
int total; 
void sum(int t1,int t2)
{
    total = t1+t2;
   
}
int main()
{
    int num1=5,num2=6,res;
  

    sum(num1,num2);
    
    printf("\n The result = %d",total);
 
}