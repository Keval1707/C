#include <stdio.h>  
int main()  
{    
  
    int n1, n2,choice;   
    float res;  
    printf (" Please select a choiceion\n ");  
    printf (" 1 Addition\n ");  
    printf (" 2 Subraction\n ");  
    printf (" 3 Multiplication\n ");  
    printf (" 4 Divison\n ");  
    printf (" Enter your choice: ");  
    scanf ("%d", &choice);
    if(choice == 1 || choice == 2 || choice == 3 || choice == 4) 
    {

        if (choice == '1' )  
        {  
            printf (" You have selected: Division");  
        }  
        else if (choice == '2')  
        {  
            printf (" You have selected: Multiplication");  
        }  
        
        else if (choice == '3')  
        {  
            printf (" You have selected: Subtraction");  
        }  
            else if (choice == '4')  
        {  
            printf (" You have selected: Addition");  
        }
        printf (" \n Enter the first number: ");  
        scanf(" %d", &n1);
        printf (" Enter the second number: ");  
        scanf (" %d", &n2);
        if (choice == 1 )  
        {  
            res = n1 + n2; 
            printf (" Addition of %d and %d is: %.2f", n1, n2, res); 
        }  
        else if (choice == 2)  
        {  
            res = n1 - n2; 
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);   
        }  
        
        else if (choice == 3)  
        {  
             res = n1 * n2; 
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);    
        }  
            else if (choice == 4)  
        {  
            res = n1 / n2;
            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
        }
    }
    else
    {
        printf("Invalid option try again");
    }
   
    return 0;  
}