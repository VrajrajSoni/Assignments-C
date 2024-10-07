////perimeter of rectangle
#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the value");
    scanf("%d%d",&l,&b);
    int perimeter = 2*(l+b);
    int Area = l*b;
    printf("\nperimeter of rectangle: %d", perimeter);
    printf("\nArea of rectangle :%d", Area);
    
}