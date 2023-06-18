#include <stdio.h>

int main()
{
    /*
    There are two kinds of type conversion in C
        => Implicit Type Conversion (Automatically -- Done by the compiler when you assign value of one type to another.)
        => Explicit Type Conversion (Manually)
     */
    int a = 9.9;
    printf("%d", a); // Will output 9

    /*
    if you divide two integers: 5 by 2, you know that the sum is 2.5. And as you know from the beginning of this page, if you store the sum as an integer, the result will only display the number 2. Therefore, it would be better to store the sum as a float or a double, right?
     */
    float result = 5 / 2;
    printf("%f", result); // 2.000000

    /*
     Why is the result 2.00000 and not 2.5? Well, it is because 5 and 2 are still integers in the division. In this case, you need to manually convert the integer values to floating-point values.
     */
    // Manual conversion: int to float
    float result2 = (float)5 / 2;

    printf("%f", result2); // 2.500000
    return 0;
}