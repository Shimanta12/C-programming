#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[30];
    char model[30];
    int year;
};

int main()
{
    // Creating a structure variable and assigning value to it.
    struct Car car1 = {"BMw", "X5", 1999};
    struct Car car2 = {"Toyota", "Corolla", 2011};
    struct Car car3 = {"Ford", "Mustang", 1969};

    // Modifying structure variables value
    strcpy(car1.brand, "Bmw");

    // Printing structure variable values with dot notation
    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    return 0;
}