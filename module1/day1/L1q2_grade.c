#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    if(grade>=90 && grade<=100)
    {
        printf("Grade A\n");
    }
    else if(grade>=75 && grade<=89)
    {
        printf("Grade B\n");
    }
    else if(grade>=60 && grade<=74)
    {
        printf("Grade C\n");
    }
    else if(grade>=50 && grade<=59)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
    return 0;
}
