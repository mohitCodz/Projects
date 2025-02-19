/*

 A Grading system which gives grades to suudents based on their percentage 
 
 */


#include "stdio.h"

// Function to check if the input string contains only alphabets and spaces
int ValidSubjectName(char check[]) 
{
    for (int i = 0; check[i] != '\0'; i++) // \0 is null character used to end a string 
    {
        // condition to check the character 
        if (!((check[i] >= 'A' && check[i] <= 'Z') || (check[i] >= 'a' && check[i] <= 'z') || check[i] == ' ')) {
            return 0; 
        }
    }
    return 1;
}

int main()
{
    int subject;

    printf("Enter total number of subjects :");
    if (scanf("%d", &subject) != 1 || subject <= 0) {
        printf("Invalid input\n");
        return 0;  
    }

    char subjectName[100]; // Array to store the subject name
    float totalNum = 0.0, marks;

    for (int i = 0; i < subject; i++)
    {
        // Ask for the name of the subject
        printf("Enter the name of subject %d: ", i + 1);
        scanf(" %s", subjectName);  // Read a line with spaces

       // checking for valid subject name
        if (!ValidSubjectName(subjectName)) {
            printf("Invalid input\n");
            return 0;  
        }

        // marks input
        printf("Enter the total marks obtained in subject %s: ", subjectName);
        if (scanf("%f", &marks) != 1 || marks < 0 || marks > 100) {
            printf("Invalid input\n");
            return 0;  
        }

        totalNum += marks;
    }

    //  percentage calculation
    float percentage = (totalNum / (subject * 100)) * 100;
    printf("Your total marks are: %.2f\n", totalNum);
    printf("Your total percentage is: %.2f\n", percentage);

    // Grade determination based on percentage
    if (percentage >= 90)
    {
        printf("Congrats! Your grade is A\n");
    }
    else if (percentage >= 80)
    {
        printf("Congrats! Your grade is B\n");
    }
    else if (percentage >= 70)
    {
        printf("Good, but you have to work hard! Your grade is C\n");
    }
    else if (percentage >= 60)
    {
        printf("Sorry! You are FAIL\n");
    }
    return 0;
}
