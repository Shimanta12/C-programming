#include <stdio.h>

int main()
{
    // Ways of declaring a string in C.
    char str[] = "Hello World!"; // Way-1

    char str2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; // Way-2

    printf("%s\n", str);

    for (int i = 0; i < 12; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}