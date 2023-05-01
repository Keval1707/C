#include<stdio.h>
void main()
{
    int no=1321,rev=0,a=no;

    while (no>0)
    {
        rev=(rev*10)+(no%10);
        no/=10;
    }
    if(a==rev)
        printf("%d is palindrome number",rev);
    else
        printf("%d is not palindrome number",rev);
}