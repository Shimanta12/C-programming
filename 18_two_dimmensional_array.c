#include <stdio.h>

int main()
{
    int mattrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("%d", mattrix[0][1]);

    mattrix[1][2] = 100;

    //  Loop through a two dimmensional array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mattrix[i][j]);
        }
    }
    return 0;
}