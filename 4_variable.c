#include <stdio.h>

int main()
{
    // Variables are named space in the memory which are used to store values.

    int a;  // Variable decalration {integer type (4 byte)}
    a = 10; // Value assignment

    int b = 20; // Variable decalration and assignment

    float x = 3.4;  // float type(4 byte)
    double d = 4.5; // double type(8 byte)

    char ch = 'S'; // character type(1 byte)

    /* Printing variable and values */
    printf("%d \n", a);
    printf("%f \n", x);
    printf("%lf \n", d);
    printf("%c \n", ch);

    /*
    Here %d, %f, %lf, %c are format specifiers. This specifiers tells the compiler what type of variable or value we are printing. It is basically a placeholder for the variable value.
    %d for printing integer variable
    %f for printing float variable
    %lf for printing double variable
    %c for printing character variable
     */

    /* Changing variable values */
    a = 20; // If we assign a new value to an existing variable, it will overwrite the previous value.

    /* We can also assign  the value of one variable to another. */
    b = a;

    /* We can decalre multiple variable and assign values in a single line */
    int m = 1, n = 2;
    // We can assign same value to multiple variable in a single line.
    int num1, num2, num3;
    num1 = num2 = num3 = 100;
    /*
    All variables in c must identified with a unique name
    These unique names are called identifiers. (Recommended to use descriptive names in order to create understandable or maintainable code)
     */

    // General rules for naming variables
    /*
    1. Names can contains letters, digit and underscores.
    2. Names must begin with a letter or underscore.
    3. Names are case sensitive (roll and Roll are different variables)
    4. Names cannot contain whitespaces or special characters.
    5. Reserved words cannot be used as identifiers.
     */
    return 0;
}