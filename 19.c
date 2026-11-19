#include <stdio.h>
int main ()
{
    char ch;
    printf("enter is character :");
    scanf("%c",&ch);

    (ch>='a' && 'z'>=ch) ? printf("Your character is in smaller case") : printf("Your character is not in smaller case ");
}