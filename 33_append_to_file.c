#include <stdio.h>

int main()
{
    FILE *fptr = fopen("data.txt", "a");
    fprintf(fptr, "\nThis is data file.");
    fclose(fptr);
    return 0;
}