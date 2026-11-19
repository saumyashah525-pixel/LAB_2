#include <stdio.h>
int main()
{
    int A,B,C;
    printf("Enter value of A :");
    scanf("%d",&A);
    printf("Enter value of B :");
    scanf("%d",&B);
    printf("Enter value of C :");
    scanf("%d",&C);

    if (A>C && A>B)
    {
        printf("A is bigger than B and C");
    }
    else if (B>C && B>A)
    {
        printf("B is bigger than A and C");
    }
    else if (C>B && C>A)
    {
        printf("C is bigger than B and A");
    }
    else
    {
        printf("All numbers are same");
    }
    
}