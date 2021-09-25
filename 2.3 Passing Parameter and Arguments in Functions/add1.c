#include <stdio.h>

void Sum(int a, int b)
{
    int sum = a+b;
    printf("Sum = %d\n", sum);
}

int main(void)
{
    Sum(23,15);
    Sum(32,45);
    Sum(657,65);
}