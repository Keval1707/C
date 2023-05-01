#include<stdio.h>
void main()
{
    int no=6,sum=1;
    for (int i = no; i >0; i--)
    {
        sum*=i;
    }
    printf("%d is factorial is %d",no,sum);
    
}