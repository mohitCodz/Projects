#include <stdio.h>

void drawCalculator() {
    printf("\t\t\t\t\t\t");
    printf(" %c %c %c %c %c \n", '1', 186, '2', 186, '3');
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf(" %c %c %c %c %c \n", '4', 186, '5', 186, '6');
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf(" %c %c %c %c %c \n", '7', 186, '8', 186, '9');
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf("     %c %c %c \n", '0', 186, '=');
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf("     %c %c %c \n", '+', 186, '-');
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf("     %c \n", '*');
}

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