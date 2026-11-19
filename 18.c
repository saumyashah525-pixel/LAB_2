#include <stdio.h>
int main ()
{
    int A,B,C;
    printf("Enter Value of A :");
    scanf("%d",&A);
    printf("Enter Value of B :");
    scanf("%d",&B);
    printf("Enter Value of C :");
    scanf("%d",&C);

    A>C && A>B ? printf("a is max") : B>C ? printf("B is max") : printf("C is max");

}