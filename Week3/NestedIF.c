/* Write a program to classify the entered grade of a student
 
 A - 90 =>
 B- 80 =>
 C- 70 =>
 D- 60 =>
 E - 50 =>
 F     <50
*/
#include<stdio.h>

int main()
{

    float studGrade;

    printf("Enter student Grade:");
    scanf("%f",&studGrade);

    if(studGrade>=90)
    {
            printf("\nGrade = A\n");
    }
    else if(studGrade>=80)
    {
        printf("\nGrade = B\n");

        if(studGrade>=85)
            printf("\nB-\n");
        else
            printf("\B+");


    }
    else if(studGrade>=70)
    {
        printf("\nGrade = C\n");
    }
    else if(studGrade>=60)
    {
        printf("\nGrade = D\n");
    }
    else if(studGrade>=50)
    {
        printf("\nGrade = E\n");
    }
    else
        printf("\nGrade = F\n");
}