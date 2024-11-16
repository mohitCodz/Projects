#include<stdio.h>
  int main()
  {
      char  operator;
      float num1,num2,result,f,c;
   // Intro and Instruction !
      printf("Hey, Everyone this is my first project A Simple Calculator \n");
      printf("Firstly select any operator \n");
      printf("Example :- + , - , * , /\n");
      printf("Temperature Conversion: 'C' (Celsius to Fahrenheit) or 'F' (Fahrenheit to Celsius)\n");

      // Operator input
       printf("Eneter operator :");
       scanf(" %c", &operator);
         // Temperature convertor

         // Temperature Conversion
    if (operator == 'C') {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius to convert to Fahrenheit: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", f);
    } 
    else if (operator == 'F') {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit to convert to Celsius: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", c);
    } 
     else{
       printf("Enter the first number :");
       scanf("%f", &num1);
       printf("Enter the second number :");
       scanf("%f", &num2);

      // condition check
       if (operator == '+')
       {
        result = num1 + num2;
        printf("The result of %f and %f is : %f",num1,num2,result);
       }
        else if (operator == '-')
        {
            result = num1 - num2;
            printf("The result of %f - %f is : %f",num1,num2,result);
        }
        else if (operator == '*')
        {
            result = num1 * num2;
            printf("The result of %f * %f is : %f",num1,num2,result);
        }
        else if (operator == '/')
        { 
             if (num2 != 0)
             {
                result = num1 / num2;
            printf("The reuslt of %f / %f is : %f",num1,num2,result);
             }
        }
      else{
         printf("Error found \n Please retry");
      }
     }
         return 0; 
  }