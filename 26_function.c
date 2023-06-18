#include <stdio.h>

void function()
{
    printf("I just got executed!\n");
}

int main()
{
    /*
    A function is a block of code which only runs when it is called.

    You can pass data, known as parameters, into a function.

    Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
     */
    function();
    function();
    return 0;
}