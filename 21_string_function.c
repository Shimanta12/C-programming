#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = "Hello world!";
    // String length
    printf("%d\n", strlen(str)); // returns 12
    printf("%d\n", sizeof(str)); // returns 13 as character needs 1 byte in the memory and izeof will always return the memory size (in bytes), and not the actual string length.

    char str2[] = " This is Shimanto!";
    // Concatenate two strings.
    strcat(str, str2);
    printf("%s\n", str);

    // Copy string
    char str3[20];
    strcpy(str3, str);
    printf("%s\n", str3);
    // Comparing strings

    printf("%d", strcmp(str, str3)); // Returns 0 if both string are equal, positive value if the first string is lexicographically smaller, negative value if first string is lexicographicallly bigger
    return 0;
}