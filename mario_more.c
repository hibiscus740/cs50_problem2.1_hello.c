#include <cs50.h>
#include <stdio.h>

// GENERAL COMMENT: I feel like my code could have been cleaner, but I am not sure how to optimize it..

int main(void)
{

    // Asking for user input

    int a;
    do
    {

        a = get_int("Height: ");

    }
    while (a < 1 || a > 8);

    // Building the pyramids

    for (int i = 0; i < a; i++)
    {

        // Pyramid going up

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

        // Space between the pyramids

        printf("  ");

        // Pyramid going down

        for (int o = 0; o <= i; o++)
        {
            printf("#");
        }

        printf("\n");
    }

}