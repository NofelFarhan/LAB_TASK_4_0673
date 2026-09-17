/*
 Question 3: 
To attract bulk orders, Slice & Dice Palace implements an absolute pricing matrix for their small pizzas: 1 pizza costs $8; a combo of 2 pizzas costs $15; and a package of 3 pizzas costs $21.
 Write a program that asks the cashier to input the customer's desired pizza quantity (limited to 1, 2, or 3). 
 Using a conditional ladder, compute the base cost according to this pricing policy and print the final package total along with the quantity.
*/


#include <stdio.h>

int main()
{
    int quantity;
    float total;

    printf("How many pizzas (1-3): ");
    scanf("%d", &quantity);

    if (quantity == 1)
    {
        total = 8;
    }
    else if (quantity == 2)
    {
        total = 15;
    }
    else if (quantity == 3)
    {
        total = 21;
    }
    else
    {
        printf("Invalid quantity.\n");
        return 0;
    }

    printf("%d pizza(s): $%.2f\n", quantity, total);

    return 0;
}