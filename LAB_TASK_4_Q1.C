/*  Question 1: 
The cashier needs to select the correct base size of pizza for the client.
 Write a C program segment that asks the cashier to select a size option (1 for small, 2 for Medium, 3 for Large). Store their input as an integer.
  Use a decision-making structure to verify if the input is valid (1, 2, or 3). If the input is valid, print the size they chose (e.g., 'Medium size selected'). 
  If they enter an incorrect option, print the error warning: 'Invalid size.' and skip any further calculations.
*/

#include <stdio.h>

int main()
{
    int size;

    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    if (size == 1)
    {
        printf("Small size selected.");
    }
    else if (size == 2)
    {
        printf("Medium size selected.");
    }
    else if (size == 3)
    {
        printf("Large size selected.");
    }
    else
    {
        printf("Invalid size.");
    }

    return 0;
}
