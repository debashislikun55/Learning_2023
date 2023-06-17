#include<stdio.h>
int check(char );
int main()
{
    char ch;
    scanf("%c",&ch);
    int res=check(ch);
    printf("%d",res);
    return 0;
}
int check(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}