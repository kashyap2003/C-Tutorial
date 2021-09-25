#include <stdio.h>

void getValue(int *pointer)
{
    *pointer = 1000; // &val = 1000.
    return; // It is returning the value of pointer to getValue(&val).
}

int main()
{
    int val;
    getValue(&val);

    printf("The value of val = %d", val);
}