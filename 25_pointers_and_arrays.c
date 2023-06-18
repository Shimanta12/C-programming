#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &arr[i]);
    }
    /*
    So from the "memory address example" above, we can see that the compiler reserves 4 bytes of memory for each array element, which means that the entire array takes up 16 bytes (4 * 4) of memory storage:
     */
    /*
    Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.
     */
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    /*
    This basically means that we can work with arrays through pointers!

    How? Since myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it:
     */
    printf("%d\n", *arr);
    // Now lets loop through all the elements of the array using pointer
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}