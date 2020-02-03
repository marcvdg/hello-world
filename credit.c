#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cc;
    do
    {
        cc = get_long("Number: ");
    }
    while (5999999999999999 < cc && cc < 39999999999999);
    long n = cc;
    int p;
    int unevens = 0;
    int evens = 0;
    int count = 0;
    int thirteen, fourteen, fifteen, sixteen;
    for (int i = 0; i < 16; i++)
    {
        p = n%10;
        //counter
        if (n > 0)
        {
            count++;
            switch (count)
            {   
                case 13: thirteen = p;
                    break;
                case 14: fourteen = p;
                    break;
                case 15: fifteen = p;
                    break;
                case 16: sixteen = p;
                    break;
            }
        }
   
        //check if uneven or even
        if ( i % 2 == 0 )
        {
            //uneven numbers from right
            unevens += p;
        }
        else
        {
            //evens
            int q = p * 2;
            for (int j = 0; j < 2; j++)
            {
                int r = q % 10;
                evens += r;
                q /= 10;
            }
        }      
        n /= 10;
    }
    int total = evens + unevens;
    if (total%10 == 0)
    {
        if ((count == 13 && thirteen == 4) || (count == 16 && sixteen == 4))
        {
            printf("VISA\n");
        }
        else if (count == 16 && sixteen == 5 && ( 6 > fifteen > 0))
        {
            printf("MASTERCARD\n");
        }
        else if (count == 15 && fifteen == 3 && (fourteen == 4 || fourteen ==7))
        {
            printf("AMEX\n");
        }
        else 
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

