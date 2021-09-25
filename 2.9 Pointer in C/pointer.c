#include <stdio.h>

int main()
{
    int k = 23;
    // This is pointer(*).
    int *pointer_p; //Pointer is a variable who's value is an address of another variable.

    pointer_p = &k; // And when ever you assign this address to the pointer you don't need to use *.

    printf("Address of k = %x\n", &k);

    printf("Value of pointer variable = %x", pointer_p); // Pointer only store the value of address.
}