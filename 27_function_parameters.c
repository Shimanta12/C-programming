#include <stdio.h>

// Multiple parameter
void greet(char name[], int age)
{
    printf("Hello %s! You are %d years old.\n", name, age);
}

// Array as parameter
void func(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    greet("Shimanta", 21); // Here Shimanata and 21 are arguments that are passed down to the function.
    greet("Banna", 21);
    greet("Safwan", 23);
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(arr));
    func(arr, 5);
    return 0;
}