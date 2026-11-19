#include <stdio.h>
int main ()
{
    int base , power,ans=1;
    printf("Enter Base :");
    scanf("%d",&base);

    printf("Enter Power :");
    scanf("%d",&power);

    for (int i=1;i<=power;i++)
    {
        ans=ans*base;
    }
    printf("%d",ans);

}