#include <stdio.h>

int main()
{
    /*
    Because strings must be written within quotes, C will misunderstand this string, and generate an error:

    The solution to avoid this problem, is to use the backslash escape character.

    The backslash (\) escape character turns special characters into string characters:
     */

    printf("We are the so called \"Vikings\" from the north!");

    /*
    Other examples of escape sequence:
    \n
    \t
    \0
    \\

     */
    return 0;
}