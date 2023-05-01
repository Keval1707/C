#include<stdio.h>
void main()
{
    int n1=153,n2=132;
    n1+=n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("n1=%d \nn2=%d",n1,n2);
}

