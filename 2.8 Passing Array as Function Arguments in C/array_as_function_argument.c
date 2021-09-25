#include <stdio.h>

int ArraySum(int a[], int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main(void)
{
    int MyArray [] = {23,45,23,45,67,8};
    int b = ArraySum(MyArray, 6);

    printf("Array sum = %d", b);
}