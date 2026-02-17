#include<stdio.h>

int main()
{
    float bal =1000.0, dep,with;
    int ch;
     
    printf("Enter a choice: \n 1. Deposit \n2. Withdraw\n3. Check Balance\n4. Exit\n");
    scanf("%d",&ch);

  //  printf("%d",ch);

  if(ch ==1)
  {
    printf("Enter the amount of money being deposited:");
    scanf("%f",&dep);

    bal = bal + dep;

    printf("The new balance is %f",bal);
  }
  else if(ch ==2)
  {
    printf("Enter the amount of money you need:");
    scanf("%f",&with);

    if(with>bal)
        printf("Ivalid operation");
    else
        bal = bal - with;

    printf("The new balance is %f",bal);

  }
  else if(ch ==3)
  {
        printf("The new balance is %f",bal);
  }
  else if(ch ==4)
  {
   return 0;
  }
  else
    printf("Invalid Choice");
}