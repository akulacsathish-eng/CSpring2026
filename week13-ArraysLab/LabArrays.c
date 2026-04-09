/*Step 1: Input and Storage
Prompt the user to enter 10 integer values.
Store the values in a one-dimensional array.
Step 2: Display in Original Order
Print all elements in the order they were entered.
Step 3: Display in Reverse Order
Print all elements in reverse order.*/
#include<stdio.h>
void maxmin(int size,int a[size])
{
    int max=0,min=1000;
    printf("%d",a[0]);
    for(int i=0;i<size;i++)
    {
        if(max<a[i])
            max= a[i];
        if(min>a[i])
            min = a[i];
    }
    printf ( " Maximum value = %d Min value = %d\n",max,min);
}

void search(int size, int a[size])
{
    int temp,c=0;
    
    printf("Enter the value to search");
    scanf("%d",&temp);
    
    for(int i=0;i<size;i++)
    {
        if(a[i]==temp)
            c=1;
    }
    
    if(c==0)
        printf("Does not exist\n");
    else
        printf("Exists\n");
}

void replace(int size,int a[size])
{
    int idx,val;
    
    printf("Eneter the target index:");
    scanf("%d",&idx);
    
    printf("Enter a value:");
    scanf("%d",&val);
    
    a[idx]=val;
}
void main()
{
    int a[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int ch;
    do{
        
        printf("Enter 1 for max/min \n Eneter 2 for search \n Enter 3 for replace\n Enter 4 for quit\n");
        scanf("%d",&ch);
        
        if(ch==1)
        {
            maxmin(15,a);
        }
        else if(ch==2)
        {
            search(15,a);
        }
        else if(ch==3)
        {
            replace(15,a);
        }
        else
            printf("Invalid Choice");
        
    }while(ch!=4);
    
        
    
}