/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct s{
    char name[50];
    int score;
};

int main()
{
   // struct s s1,s2,s3;
    struct s s1 = { "Akula",50};
    scanf("%s",s1.name);
    
  //  s1.name = "Akula";
   // s1.score = "50";
}