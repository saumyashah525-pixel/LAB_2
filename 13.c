#include <stdio.h>
int main ()
{
    int number;
    printf("Enter your number :");
    scanf("%d",&number);

    if ((number%2)==0)
    {
        printf("Your number is Even ");
    }
    else{
        printf("Your number is odd");
    }
    
    
}