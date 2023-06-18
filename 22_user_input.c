#include <stdio.h>

int main()
{
    int a;
    printf("Type a number: ");
    scanf("%d", &a);
    printf("%d", a);

    // Multiple value input
    int x;
    char ch;
    scanf("%d %c", &x, &ch);

    // String input
    char name[30];
    // scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words).
    // scanf("%s", name);

    // For that reason we use fgets() function to read a line of text.
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
    return 0;
}