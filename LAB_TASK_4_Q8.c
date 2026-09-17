/*
Question 8: 
The shop is running a promotional giveaway to encourage premium combos: If a customer orders exactly 3 pizzas and selects the Stuffed Crust option, they qualify for a free side dish. 
Write a C program segment that reads the number of pizzas and the crust type selection (3 for Stuffed). 
If both conditions are met simultaneously using a compound logical operator, print: 'You get free garlic bread!'. Otherwise, print: 'Thank you for your order!'
*/
#include <stdio.h>

int main()
{
    int pizzas;
    int crust;

    printf("How many pizzas: ");
    scanf("%d", &pizzas);

    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);

    if (pizzas == 3 && crust == 3)
    {
        printf("You get free garlic bread!\n");
    }
    else
    {
        printf("Thank you for your order!\n");
    }

    return 0;
}