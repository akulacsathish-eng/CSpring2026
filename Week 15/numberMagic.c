/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int reverse(int);
int sumofDigits(int num)
{
    int sum=0,t1;
    while(num>0)
    {
        t1 = num%10;
        num = num/10;
        sum = sum + t1;
    }
    return sum;
}
int prodofDigits(int num)
{
    int prod=1,t1;
    while(num>0)
    {
        t1 = num%10;
        num = num/10;
        prod = prod * t1;
    }
    return prod;
}

void palindrome(int num)
{
    if(num == reverse(num))
        printf("Palindrome");
    else
        printf("Not a palindrome");
}

int reverse(int num)
{
    int count=0,temp =num,rev=0,t1;
    while(temp>0)
    {
        temp = temp/10;
        count++;
    }
    
    while(num>0)
    {
        t1 = num%10;
        num = num /10;
        rev= rev+ (t1 * pow(10,count-1));
        count--;
    }
    return rev;
    
}
void largestSmallest(int num)
{
    int larg=0,small =10000,t1;
    
    while(num>0)
    {
        t1=num%10;
        num = num/10;
        
        if(t1>larg)
            larg=t1;
            
        if(t1<small)
            small = t1;
    }
    printf("Largest = %d \n Smallest = %d",larg,small);
}

void evenOdd(int num)
{
    int evnc=0,oddc=0,t1;
   
   while(num>0)
    {
        t1 = num%10;
        num = num/10;
       
       if(t1%2 ==0)
        evnc++;
       else
        oddc++;
            
    }
    printf("Even numbers = %d, odd numbers = %d",evnc,oddc);
    
    
}

int main()
{
    int num;
    printf("Enter a number upto 5 digits");
    scanf("%d",&num);
    
    int sum =sumofDigits(num);
    int rev = reverse(num);
    evenOdd(num);
    largestSmallest(num);
    int prod = prodofDigits(num);
    palindrome(num);

    printf("Sum = %d", sum);
    printf("Product = %d",prod);
    printf("reverse = %d",rev);
    return 0;
}
