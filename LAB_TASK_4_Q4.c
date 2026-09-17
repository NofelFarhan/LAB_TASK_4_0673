/*
Question 4: 
Customers can choose their crust to suit their preference. 
Each crust selection has a distinct pricing addition: Regular crust costs $0, thin crust adds $1, and Stuffed crust adds $2.
 Write a program that asks the cashier to enter the current total cost of the order. Then, prompt for the crust type choice (1 for regular, 2 for Thin, 3 for Stuffed). Use conditional branches to add the appropriate surcharge to the total and print the new updated bill total.
*/

#include <stdio.h>

int main()
{
    float total;
    int crust;

    printf("Enter current total cost: $");
    scanf("%f", &total);

    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);

    if (crust == 1)
    {
        total = total + 0;
        printf("Regular crust selected (+$0.00)\n");
    }
    else if (crust == 2)
    {
        total = total + 1;
        printf("Thin crust selected (+$1.00)\n");
    }
    else if (crust == 3)
    {
        total = total + 2;
        printf("Stuffed crust selected (+$2.00)\n");
    }
    else
    {
        printf("Invalid crust selection.\n");
        return 0;
    }

    printf("Updated bill total: $%.2f\n", total);

    return 0;
}