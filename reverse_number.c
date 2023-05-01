#include<stdio.h>
void main()
{
    int no=153,rev=0;
    while (no>0)
    {
        rev=(rev*10)+(no%10);
        no/=10;
    }
    printf(" rev is %d",rev);
}
