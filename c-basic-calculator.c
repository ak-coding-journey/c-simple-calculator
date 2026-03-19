#include <stdio.h>
int main()
{
    float a,b;
    char operator;

    printf("enter first number:\n");
    scanf("%f",&a);
    

    printf("enter operator (+ - / *):\n");
    scanf(" %c",&operator);

    printf("enter second number:\n");
    scanf("%f",&b);
    
    switch (operator)
    {
    case '+':
        printf("result = %.2f",a+b);
        break;

    case '-':
        printf("result = %.2f",a-b);
        break;
    case '*':
        printf("result = %.2f",a*b);
        break;
    case '/':
        printf("result = %.2f",a/b);
        break;
    
    default:
        printf("invalid operator");
    }


    return 0;
}