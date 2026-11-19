#include <stdio.h>
int main ()
{
    int A,B,C,Max ;
    printf("Enter Value of A :");
    scanf("%d",&A);
    printf("Enter Value of B :");
    scanf("%d",&B);
    printf("Enter Value of C :");
    scanf("%d",&C);

    if (A>B)
    {
       if (A>C)
       {
        Max=A;
       
       }
       else
       {
        Max=C;
       }
       
    }
    else
    {
        if (B>C)
        {
            Max=B;
        }
        else
        {
            Max=C;
        }
        printf("Max is : %d",Max);
    }

   
    
    
    
}