#include <stdio.h>

int main()
{
    // break statement is used to jump out of loop and switch.
    for (int i = 1; i < 10; i++)
    {
        if (i > 5)
        {
            break;
        }
        printf("%d ", i);
    }
    // The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

    for (int i = 1; i < 10; i++)
    {
        if (i > 5)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}