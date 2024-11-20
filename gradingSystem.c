#include "stdio.h"

      int main()
      {

         int subject;

         printf("Enter total number of subjects :");
         scanf("%d", &subject);

         char subject[100]; // array that can store the subjects name
         float totalNum = 0.0,marks;

         for (int i = 0; i < subject; i++)
         {
            printf("Enter the name of the subjeccts :");
            scanf("%s", &subject[i]);

            printf("Enter the total marks obtainer in subject %s :",marks);
            scanf("%f", &marks);

            totalNum += marks;
         }
         
         float percentage = (totalNum / (subject * 100)) * 100;
            printf("Your tiatal marka are : %.2f\n", totalNum);
            printf("Your total percentage is : %.2f\n", percentage);
         if (percentage >= 90)
         {
           printf("Congrats ! Your grade is A \N");
         }
         else if (percentage >= 80)
         {
           printf("Congrats ! Your grade is B \N");
         }
          else if (percentage >= 70)
         {
           printf("Good,but you have to work hard !\n  Your grade is C \N");
         }
          else if (percentage >= 60)
         {
           printf("Sorry ! You are FAIL  \N");
         }
         
         return 0;

         }
    