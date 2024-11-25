/*

 Calculator which can perform basic  tasks
 
*/


#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    drawCalculator();
    
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1; 
        }
        result = num1 / num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else {
        printf("Error: Invalid operator. Please try again!\n");
        return 1; 
    }
    
    printf("The result of %.2f %c %.2f is %.2f\n", num1, operator, num2, result);
    return 0;
}
