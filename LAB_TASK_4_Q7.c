/*
Question 7: 
The program asks for the bill total and student ID status. If the customer has a student ID, it subtracts $2.00 from the total. 
After this, it uses a completely separate if statement to check if the bill is negative (regardless of whether a discount was applied) and adjusts it to $0.00 if needed. 
This makes the program more robust as it protects ALL customers from negative bills, not just students.
*/

#include <stdio.h>

int main()
{
    float total;
    char studentID;

    printf("Enter bill total: $");
    scanf("%f", &total);

    printf("Do you have a Student ID (Y/N)? ");
    scanf(" %c", &studentID);

    if (studentID == 'Y' || studentID == 'y')
    {
        total = total - 2.00;
        printf("Student discount applied! (-$2.00)\n");
    }
    else if (studentID == 'N' || studentID == 'n')
    {
        printf("No student discount applied.\n");
    }
    else
    {
        printf("Invalid choice. Please enter Y or N.\n");
    }

    /* Separate check to prevent a negative bill */
    if (total < 0)
    {
        total = 0;
    }

    printf("Final bill total: $%.2f\n", total);

    return 0;
}