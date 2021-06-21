#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{   
    // Declaring identifiers
    int x = 0;
    int penny = 1;
    int nickel = 5;
    int dime = 10;
    int quarter = 25;
    float ChangeOwed = 0.00;
    float cents;
    // Receiving Values from the user
    do
    {
        ChangeOwed = get_float("Change Owed: ");
    }
    while (ChangeOwed <= 0);
    // Rounding to the nearest integer value
    cents = round(ChangeOwed * 100);
    // Computing the number of quarters that will be used 
    while (cents >= quarter)
    {
        cents -= quarter;
        x++;
    }
    // Computing the number of dimes that will be used 
    while (cents >= dime)
    {
        cents -= dime;
        x++;
    }
    // Computing the number of nickels that will be used 
    while (cents >= nickel)
    {
        cents -= nickel;
        x++;
    }
    // Computing the number of pennies that will be used 
    while (cents >= penny)
    {
        cents -= penny;
        x++;
    }
    printf("%i\n", x);
}