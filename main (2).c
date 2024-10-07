//program to find dia, circum, area of circle
#include<stdio.h>
int main(){
int r;
printf("enter the value");
scanf("%d", &r);
float pi = 3.14;
int dia = 2*r;
float peri = 2*pi*r;
float Area = pi*r*r;
printf("\ndia of circle:%d", dia);
printf("\nperi of circle:%f", peri);
printf("\nArea of circle:%f", Area);
}

