#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float amt;
    do
    {
        amt = get_float("Change owed: ");
    }
    while (amt < 0.01);
    int cents = 100 * amt;
    int coins = 0;
    coins += (cents / 25);
    cents = (cents % 25);
    coins += (cents / 10);
    cents = (cents % 10);
    coins += (cents / 5);
    cents = (cents % 5);
    coins += cents;
    printf("%d\n", coins);
}

