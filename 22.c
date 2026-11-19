#include <stdio.h>
int main ()
{
    int n,fact=1;
    printf("Enter value of N :");
    scanf("%d",&n);

    for (int i=n;i>=1;i--)
    {
        fact=fact*i;
       
    }
     printf("%d",fact);
}