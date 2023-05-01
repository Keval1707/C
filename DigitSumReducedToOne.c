	
/**************************************************************************************************
 * Program to find the sum of the digits of a number till the sum is reduced to a single digit
***************************************************************************************************/

#include<stdio.h> 
int main()
{    
    int num;
    int sum = 0, rem;

    printf("Enter a number: ");
    scanf("%ld", &num);   

    while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0) 
        {
            rem = num % 10;  
            sum += rem;
            num = num / 10;
        }

        num = sum;
    }

    printf("%d", sum);

    return 0;
}