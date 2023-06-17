#include<stdio.h>
int bit_operations(int , int );
int main()
{
    int num;
    int oper_type;
    printf("Enter the number and operation type\n");
    scanf("%d\n%d", &num, &oper_type);
    int result = bit_operations(num,oper_type);
    if (result == -1) 
    {
        printf("Invalid operation type\n");
    }
    else {
        printf("%d\n", result);
    }
    return 0;
}

int bit_operations(int num, int oper_type)
 {
    if (oper_type == 1) {
        // Set 1st bit
        num |= 1;
    } else if (oper_type == 2) {
        // Clear 31st bit
        num &= ~(1 << 30);
    } else if (oper_type == 3) {
        // Toggle 16th bit
        num ^= (1 << 15);
    } else {
        // Invalid operation type
        return -1;
    }

    return num;
}