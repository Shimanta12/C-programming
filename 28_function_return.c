#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 14);
    printf("%d\n", result);
    return 0;
}