#include <stdio.h>
int main ()
{
    int Maths,Sci,Eng,Guj,Hindi,Given_Mark;
    printf("Enter Your Maths Marks :");
    scanf("%d",&Maths);

    printf("Enter Your Science Marks :");
    scanf("%d",&Sci);

    printf("Enter Your English Marks :");
    scanf("%d",&Eng);

    printf("Enter Your Gujrati Marks :");
    scanf("%d",&Guj);
    
    printf("Enter Your Hindi Marks :");
    scanf("%d",&Hindi);

    Given_Mark=Maths+Sci+Eng+Guj+Hindi;

    if (Given_Mark<=500 && 400<=Given_Mark)
    {
        printf("You Got marks %d and A grade",Given_Mark); 
    }
    else if (Given_Mark<=399 && 300<=Given_Mark)
    {
        printf("You Got marks %d and B grade",Given_Mark);
    }
    else if (Given_Mark<=299 && 200<=Given_Mark)
    {
        printf("You Got marks %d and C grade",Given_Mark);
    }
    else if (Given_Mark<=199 && 100<=Given_Mark)
    {
        printf("You Got marks %d and D grade",Given_Mark);
    }
    else{
        printf("You Got %d and Failed Exam",Given_Mark);
    }

}