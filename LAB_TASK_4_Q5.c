/*
Question 5: 
Extra cheese is a popular option that carries a fixed preparation fee of $1.50. 
Write a program that prompts the cashier for the current order total, then asks: 'Do you want extra cheese (Y/N)?'. 
Check the character input. If the cashier enters 'Y' or 'y', add $1.50 to the current total cost and print the updated total. If they enter 'N' or 'n', keep the total unchanged. Handle any invalid characters with a polite warning.
*/
#include <stdio.h>

int main()
{
    float total;
    char cheese;

    printf("Enter current order total: $");
    scanf("%f", &total);

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y')
    {
        total = total + 1.50;

        printf("Extra cheese added (+$1.50)\n");
        printf("Updated order total: $%.2f\n", total);
    }
    else if (cheese == 'N' || cheese == 'n')
    {
        printf("No extra cheese selected.\n");
        printf("Order total remains: $%.2f\n", total);
    }
    else
    {
        printf("Invalid choice. Please enter Y or N.\n");
    }

    return 0;
}