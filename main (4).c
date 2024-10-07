//cm into meter and kilometer
#include<stdio.h>
int main()
{
    int cm;
    printf("Enter the value in centi");
    scanf("%d", &cm);
    int meter = cm / 100;
    int Kilometer = cm * 0.00001;
    printf("\ncenti to meter: %d", meter);
    printf("\ncenti to kilometer: %d", Kilometer);
    
}

