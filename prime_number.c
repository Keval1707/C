#include<stdio.h>
void main()
{
    int no=7,flag=0,mid;
    mid=no/2;
    for(int i=2;i<=mid;i++)
    {
        if(no/2==0)
        {
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("number is prime ");
    }
    else
        printf("number is not prime ");
    
    
}