#include<stdio.h>
  int main()
  {
      char  operator;
      float num1,num2,result;
   // Intro and Instruction !
      printf("Hey, Everyone this is my first project A Simple Calculator \n");
      printf("Firstly select any operator \n");
      printf("Example :- + , - , * , / \n");

      // Operator input
       printf("Eneter operator :");
       scanf(" %c", &operator);

       // number input
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
         return 0; 
  }