#include<stdio.h>
int main()
{
    int op1,op2;
    char op;
    printf("Enter Number1:");
    scanf("%d",&op1);
    printf("Enter Number2:");
    scanf("%d",&op2);
    printf("Enter Operator:");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("%d\n",op1+op2);
            break;
        case '-':
            printf("%d\n",op1-op2);
            break;
        case '*':
            printf("%d\n",op1*op2);
            break;
        case '/':
            printf("%d\n",op1/op2);
            break;
        default:
            printf("Invalid Operator\n");
    }
    return 0;
}