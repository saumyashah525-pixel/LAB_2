#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter Your char :");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("Your character CAPTITAL");
    }
    else if (ch>='a' && ch<='z' )
    {
        printf("Your character SMALL CASE");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("You Enter numbers");

    }
    else{
        printf("Your enter special symbol");
    }
    
    
    

}