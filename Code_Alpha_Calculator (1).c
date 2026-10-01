#include<stdio.h>

int main()
{
    char op;
    float num1,num2;
    
    printf("Enter your first number: ");
    scanf("%f",&num1);
    
    printf("Select an operator: ");
    scanf(" %c",&op);
    
    printf("Enter your second number: ");
    scanf("%f",&num2);
    
    
    switch(op)
    {
    case '+':
        printf("\nAddition=%.0f",num1+num2);
        break;
    case '-':
        printf("\nSubtraction=%.0f",num1-num2);
        break;
    case '*':
        printf("\nMultiplication=%.0f",num1*num2);
        break;
    case '/':
        if(num2==0)
            printf("\nDivision with zero is not possible");
        
        else
            printf("\nDivision=%.2f",num1/num2);
        
        break;
    default:
        printf("\nInvalid Operator");
        break;
    }
    

    return 0;
}