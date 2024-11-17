#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operator;
    
    printf("Enter the Symbol (+,-,*,/) : ");
    scanf(" %c",&operator);
    
    printf("Enter the number :");
    scanf("%f",&num1);
    printf("Enter the number :");
    scanf("%f",&num2);
    
    if(operator == '+'){
        result = num1 + num2;
    }
    else if(operator == '-'){
        result = num1 - num2;
    }
    else if(operator == '/'){
        result = num1 / num2;
    }
    else if(operator == '*'){
        result = num1 * num2;
    }
    else{
        printf("Enter the Valid Symbol");
    }
    
    printf("The Result of %.2f and %.2f is %.2f",num1,num2, result);
   
    return 0;
}