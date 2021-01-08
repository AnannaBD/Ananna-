#include <stdio.h>
void main()
{
    int a,i,b,d;
    printf("Enter base value 'X'=");
    scanf("%d",&a);
    printf("Enter power value 'Y'=");
    scanf("%d",&b);
    d=a;
    for(i=1; i<b; i++) 
    {
        d=d*a;
    }
    printf("The value of X^Y is : %d",d);
}

