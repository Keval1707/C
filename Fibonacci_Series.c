#include<stdio.h>
void main()
{

    int n3,n2=1,n1=0;
    for(int i=0;i<=10;i++)
    {
        n3=n1+n2;
        printf(" value is %d : \n",n3);
        n1=n2;
        n2=n3;
    }
}
