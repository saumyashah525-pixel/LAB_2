#include <stdio.h>
int main ()
{
    char operators;
    float a,b;

    printf("Enter oprator as +,-,*,/ :-");
    scanf("%c",&operators);

    printf("Enter Value of A :");
    scanf("%f",&a);
    printf("Enter value of B :");
    scanf("%f",&b);

    switch (operators)
    {
    case '+' : printf("Your addition is = %f",a+b);
        break;
    case '-' : printf("Your substraction is = %f",a-b);
        break;
    case '*' : printf("Your multiplication is = %f",a*b);
        break;    
    case '/' : printf("Your division is = %f",a/b);
        break;
    default: printf("Your operation is invalid");
        break;
    }   
}