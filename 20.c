#include <stdio.h>
int main ()
{
    int a,b,operator;
    printf("Enter Your Operator 1,2,3,4 :");
    scanf("%d",&operator);
    printf("Enter Value of A :");
    scanf("%d",&a);
    printf("Enter value of B :");
    scanf("%d",&b);

    switch (operator)
    {
    case 1 : printf("Your addition is = %d",a+b);
        break;
    case 2 : printf("Your substraction is = %d",a-b);
        break;
    case 3 : printf("Your multiplication is = %d",a*b);
        break;    
    case 4 : printf("Your division is = %d",a/b);
        break;
    default: printf("Your operation is invalid");
        break;
    }   
}