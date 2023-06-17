#include<stdio.h>
int main()
{
    int rollno;
    printf("Enter roll number\n");
    scanf("%d",&rollno);
    char FName[100];
    char LName[100];
    printf("Enter First name\n");
    scanf("%s",FName);
    printf("Enter Last name\n");
    scanf("%s",LName);
    float phy,chem,maths;
    printf("Enter marks in physics, chemistry and maths\n");
    scanf("%f\n%f\n%f",&phy,&chem,&maths);
    float total = phy+chem+maths;
    float percentage = (total/300)*100;
    printf("Total mark is %f\n",total);
    printf("Percentage is %f\n",percentage);
    printf("%s %s student with roll number %d has secured total %f marks and %f percentage ",FName,LName,rollno,total,percentage);
    return 0;
}