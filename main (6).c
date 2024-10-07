//program for daya into weeks and years
#include<stdio.h>
int main(){
    int days;
    printf("Enter the days");
    scanf("%d", &days);
    int weeks = days/7;
    int years = days/365;
    printf("\ngive no of weeks:%d",weeks);
    printf("\ngive no of years:%d",years);
}

