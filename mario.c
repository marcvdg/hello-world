#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h<1);
    int block = h-1;
    for (int i = 0; i<h; i++)
    {
        for (int j = 0; j<(block);j++)
        {
            printf(" ");
        }
        for (int k = h - block; k>0; k--)
        {
            printf("#");
        }
        printf("\n");
        block--;
    }

}


