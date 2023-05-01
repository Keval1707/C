#include<stdio.h>
void main()
{
    int no=153,sum=0;
    while (no>0)
    {

        sum=sum+(no%10);
        no/=10;
    }
    printf(" sum is %d",sum);
}