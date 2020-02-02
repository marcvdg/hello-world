#include <cs50.h>
#include <stdio.h>

int geteven(int p, int cc)
{
    return (cc / p) % p;
}

int main(void)
{
    long cc;
    do
    {
        cc = get_long("Number: ");
    }
    while (cc < 10);

    int second = geteven(10, cc);
    int fourth = getsec(1000, cc);
    printf("%li\n", cc);
    printf("%i\n", second);
    printf("%i\n", fourth);
}

