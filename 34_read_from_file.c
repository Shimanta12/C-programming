#include <stdio.h>

int main()
{
    FILE *fptr = fopen("data.txt", "r");
    if (fptr == NULL)
    {
        printf("File could not be opened.");
    }
    else
    {
        char str[1000];
        while (fgets(str, sizeof(str), fptr))
        {
            printf("%s", str);
        }
    }
    return 0;
}