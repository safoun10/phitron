#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 10;   // var with base value
    int *pA = &a; // pointer var declared with a star sign and address value assigned with an ampersand sign

    printf("1. %d\n", a);  // 1. the untouched var itself
    printf("2. %p\n", &a); // 2. address of that var with ampersand and %p format specifier

    printf("3. %p\n", pA);  // 3. printing the address saved inside the pointer var
    printf("4. %d\n", *pA); // 4. dereferencing the pointer and printing the value with %d pointed towards the base var

    printf("5. %p\n", &pA); // 5. address of the pointer var itself

    *pA = 20; // dereferenced pointer changing the value of the base var

    printf("6. %d\n", a);   // 6. printing value of base var after changing with pointer
    printf("7. %d\n", *pA); // 7. printing the value of base var with a dereferenced pointer var

    int **ppA = &pA;          // pointer to pointer to int a
    printf("8. %d\n", **ppA); // dereferencing the dereferenced pointed that gives base var value

    return 0;
}