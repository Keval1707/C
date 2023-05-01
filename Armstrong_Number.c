#include<stdio.h>
void main()
{
    int no=153;
    int r,sum=0,a=no;
    while (a>0)
    {
        r=a%10;
        sum=sum+(r*r*r);
        a/=10;
    }
    if (no==sum)
    {
        printf("%d is armstrong  number",no);
    }
    else
        printf("%d is not armstrong  number",no);
}