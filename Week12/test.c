#include<stdio.h>

int main()
{
    int arr[5];
    // fill it with 40,20,10,30,25

    for(int i=0;i<5;i++)
    {
        printf("Enter the %dth element",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%dth element = %d",i+1,arr[i]);
        
    }

  
}