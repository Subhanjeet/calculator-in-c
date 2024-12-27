#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Enter the 1st operator(+,-,*,/): ");
    scanf("%c", &c);
    printf("Enter the operand: ");
    scanf("%d", &a);
    printf("Enter the operand: ");
    scanf("%d", &b);
    switch (c)
    {
    case '+': printf("%d + %d = %d",a,b,a+b);
        break;
    case '-': printf("%d - %d = %d",a,b,a-b);
        break;
    case '/':printf("%d / %d = %d",a,b,a/b);
        break;
    case '*': printf("%d * %d = %d",a,b,a*b);
        break;
        default:printf("invalid number");
        break;
    }
}