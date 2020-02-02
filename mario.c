#include <cs50.h>
#include <stdio.h>

void air(int block);
void stone(int h, int block);

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
        air(block);
        stone(h, block);
        printf("  ");
        stone(h, block);
        air(block);
        printf("\n");
        block--;
    }

}

void air(int block)
{
    for (int j = 0; j<(block);j++)
        {
            printf(" ");
        }
}

void stone(int h, int block)
{
    for (int k = h - block; k>0; k--)
    {
       printf("#");
    }
}

