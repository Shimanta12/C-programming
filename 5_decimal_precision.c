#include<stdio.h>

int main()
{
    float x = 3.5;
    printf("%f", x); //Default will show 6 digits after decimal point.
    printf("%.0f", x); // Will show 0 digit after decimal point
    printf("%.1f", x); // Will show 1 digit after decimal point
    printf("%.2f", x); // Will show 2 digit after decimal point
    return 0;
}