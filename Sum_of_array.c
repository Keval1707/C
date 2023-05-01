#include<stdio.h>
void main()
{
    int a[]={3,4,5};
    int b[]={6,7,8};
    int sum[3];
    for (int i = 0; i < 3; i++)
    {
       sum[i]=a[i]+b[i];
    }
    for (int i = 0; i < 3; i++)
    {
       printf("%d",sum[i]);
       printf("\n");
    }
    
}