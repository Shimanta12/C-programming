#include <stdio.h>

int add(int, int);
int multiply(int, int);

int main()
{
    /* A function consist of two parts:

    Declaration: the function's name, return type, and parameters (if any)
    Definition: the body of the function (code to be executed)
    For code optimization, it is recommended to separate the declaration and the definition of the function.

    You will often see C programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read: */
    printf("%d\n", add(5, 6));
    printf("%d\n", multiply(5, 6));
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
