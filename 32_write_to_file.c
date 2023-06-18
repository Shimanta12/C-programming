#include <stdio.h>

int main()
{
    FILE *fptr = fopen("data.txt", "w");
    fprintf(fptr, "Hello there!");
    fclose(fptr);
    return 0;
}