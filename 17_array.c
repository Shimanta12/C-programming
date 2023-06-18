#include <stdio.h>

int main()
{
    // Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    int arr[] = {1, 2, 3, 4, 5};

    // Another common way to create arrays, is to specify the size of the array, and add elements later.
    /* Using this method, you should know the size of the array, in order for the program to store enough memory.
    You are not able to change the size of the array after creation. */
    int arr2[5];
    arr2[0] = 100;
    arr2[1] = 200;
    arr2[2] = 300;
    arr2[3] = 400;
    arr2[4] = 500;

    // Loop through an array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}