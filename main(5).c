#include<stdio.h>
int main()
{
    int celcius,Fahernhint
    printf("\nEnter the temp in celcius");
    printf("\nEnter the temp into Fahernhint");
    scanf("%d",&celcius);
    Fahernhint = (celcius * 9/5) + 32;
    celcius = (Fahernhint - 32) * 5/9;
    printf("\nTemp in fahernhint: %d",Fahernhint);
    printf("\nTemp in celcius:%d",celcius);

    
}