#include <stdio.h>

int main()
{
    int a = 20;
    int *ptr = &a; // storing the address of variable a in pointer ptr using address-of operator. (Referencing)
    printf("%d\n", a);
    printf("%p\n", ptr);

    printf("%d", *ptr); // Accessing the value of the variable the pointer points to using dereferrencing operator. (Dereferencing)
    return 0;
}