/*
Question 10: 
Integrate all the rules from Questions 1 to 9 into a single complete C program. The program must sequentially: 
  1. Input and validate the pizza size and count. 
  2. Apply the dynamic base pricing discount package. 
  3. Request crust type and cheese choice, adding relevant fees. 
  4. Prompt for the current hour and apply the 10% Happy Hour discount if appropriate. 
  5. Deduct the $2 student discount if they present an ID. 
  6. Evaluate the free garlic bread bonus eligibility. 
  7. Add delivery fees if chosen. 
  8. Print a beautifully clean, structured invoice with itemized charges and the final total cost.

*/
#include <stdio.h>

int main()
{
    int size;
    int quantity;
    int crust;
    int hour;
    int fulfillment;

    char cheese;
    char studentID;

    float total = 0;
    float discount = 0;

    char sizeName[20];
    char crustName[20];
    char cheeseName[10];
    char studentName[10];
    char fulfillmentName[20];

    printf("========================================\n");
    printf(" WELCOME TO SLICE & DICE PIZZA PALACE\n");
    printf("========================================\n");

    /* Step 1: Select and validate pizza size */
    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    if (size == 1)
    {
        printf("Small size selected.\n");
        sprintf(sizeName, "Small");
    }
    else if (size == 2)
    {
        printf("Medium size selected.\n");
        sprintf(sizeName, "Medium");
    }
    else if (size == 3)
    {
        printf("Large size selected.\n");
        sprintf(sizeName, "Large");
    }
    else
    {
        printf("Invalid size.\n");
        return 0;
    }

    /* Step 2: Enter quantity and apply package pricing */
    printf("How many pizzas (1-3): ");
    scanf("%d", &quantity);

    if (quantity == 1)
    {
        total = 8;
        printf("1 pizza: $8.00\n");
    }
    else if (quantity == 2)
    {
        total = 15;
        printf("2 pizzas: $15.00 (Save $1.00!)\n");
    }
    else if (quantity == 3)
    {
        total = 21;
        printf("3 pizzas: $21.00 (Save $3.00!)\n");
    }
    else
    {
        printf("Invalid quantity.\n");
        return 0;
    }

    /* Step 3: Select crust */
    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);

    if (crust == 1)
    {
        total = total + 0;
        sprintf(crustName, "Regular");
        printf("Regular crust selected (+$0.00)\n");
    }
    else if (crust == 2)
    {
        total = total + 1;
        sprintf(crustName, "Thin");
        printf("Thin crust selected (+$1.00)\n");
    }
    else if (crust == 3)
    {
        total = total + 2;
        sprintf(crustName, "Stuffed");
        printf("Stuffed crust selected (+$2.00)\n");
    }
    else
    {
        printf("Invalid crust selection.\n");
        return 0;
    }

    /* Step 4: Extra cheese */
    printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y')
    {
        total = total + 1.50;
        sprintf(cheeseName, "Yes");
        printf("Extra cheese added (+$1.50)\n");
    }
    else if (cheese == 'N' || cheese == 'n')
    {
        sprintf(cheeseName, "No");
        printf("No extra cheese selected.\n");
    }
    else
    {
        printf("Invalid choice. Please enter Y or N.\n");
        return 0;
    }

    /* Step 5: Happy Hour discount */
    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14)
    {
        discount = total * 0.10;
        total = total - discount;

        printf("Happy Hour 10%% discount applied! (-$%.2f)\n", discount);
    }
    else
    {
        printf("No Happy Hour discount applied.\n");
    }

    /* Step 6: Student discount */
    printf("Student ID (Y/N): ");
    scanf(" %c", &studentID);

    if (studentID == 'Y' || studentID == 'y')
    {
        total = total - 2.00;
        sprintf(studentName, "Yes");

        printf("Student discount applied! (-$2.00)\n");
    }
    else if (studentID == 'N' || studentID == 'n')
    {
        sprintf(studentName, "No");
    }
    else
    {
        printf("Invalid choice. Please enter Y or N.\n");
        return 0;
    }

    /* Step 6 continued: Prevent negative bill */
    if (total < 0)
    {
        total = 0;
    }

    /* Step 7: Free garlic bread bonus */
    if (quantity == 3 && crust == 3)
    {
        printf("You get free garlic bread!\n");
    }

    /* Step 8: Fulfillment option */
    printf("Fulfillment (1.Pickup, 2.Delivery): ");
    scanf("%d", &fulfillment);

    if (fulfillment == 1)
    {
        sprintf(fulfillmentName, "Pickup");
    }
    else if (fulfillment == 2)
    {
        total = total + 3.00;
        sprintf(fulfillmentName, "Delivery");

        printf("Delivery selected (+$3.00)\n");
    }
    else
    {
        printf("Invalid fulfillment option.\n");
        return 0;
    }

    /* Step 9: Final Receipt */
    printf("========================================\n");
    printf(" ORDER RECEIPT\n");
    printf("========================================\n");

    printf("Pizza Size: %s\n", sizeName);
    printf("Quantity: %d pizza(s)\n", quantity);
    printf("Crust Type: %s\n", crustName);
    printf("Extra Cheese: %s\n", cheeseName);
    printf("Student ID: %s\n", studentName);
    printf("Fulfillment: %s\n", fulfillmentName);

    printf("----------------------------------------\n");

    if (quantity == 3 && crust == 3)
    {
        printf("BONUS: Free Garlic Bread included!\n");
    }

    printf("========================================\n");
    printf("FINAL TOTAL: $%.2f\n", total);
    printf("========================================\n");
    printf(" Thank you for dining with us!\n");
    printf(" Have a slice-tastic day!\n");
    printf("========================================\n");

    return 0;
}