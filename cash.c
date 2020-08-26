#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)

{
    // 1. Asking user for positive float input.

    float c;
    do
    {
        c = get_float("Change needed: ");
    }
    while (c <= 0);

    // 2. Rounding the dollar input into cents.

    int i = round(c * 100);
 

    int x = 0;

    // 3. Checking if possible to give a quarter change.

    for (x = 0; (i - 25) >= 0; x++)
    {
        i = i - 25;
    }

    // 4. Checking if possible to give a dime change.

    for (; (i - 10) >= 0; x++)
    {
        i = i - 10;
    }

    // 5. Checking if possible to give a nickel change.

    for (; (i - 5) >= 0; x++)
    {
        i = i - 5;
    }

    // 6. Checking if possible to give a penny change.

    for (; (i - 1) >= 0; x++)
    {
        i = i - 1;
    }

    // 7. Printing the final coin amount output.

    printf("%i\n", x);
}


