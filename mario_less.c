#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    // Asking for user input
    
    int a;
    do
    {

        a = get_int("Height: ");

    }
    while (a < 1 || a > 8);

    // Building the pyramid

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j < a - i - 1)
            {
                printf(" ");
            }
            
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

}