/*
Question 9: 
The store handles both pick-up orders and deliveries. A home delivery option adds a logistics and fuel surcharge of $3.00 to the bill. 
Write a program that inputs the order total, and then asks: 'Fulfillment Option (1. Pickup, 2. Delivery)'. 
Use a decision structure. If '2' is chosen, add $3.00 to the total. If '1' is chosen, add nothing.
 Calculate and output the final total cost of the order.
*/

#include <stdio.h>

int main()
{
    float total;
    int fulfillment;

    printf("Enter order total: $");
    scanf("%f", &total);

    printf("Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillment);

    if (fulfillment == 1)
    {
        printf("Pickup selected. No delivery fee added.\n");
    }
    else if (fulfillment == 2)
    {
        total = total + 3.00;
        printf("Delivery selected (+$3.00)\n");
    }
    else
    {
        printf("Invalid fulfillment option.\n");
        return 0;
    }

    printf("Final total cost: $%.2f\n", total);

    return 0;
}