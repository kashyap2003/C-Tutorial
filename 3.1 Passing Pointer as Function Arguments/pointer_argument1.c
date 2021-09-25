#include <stdio.h>

int getSum(int *array, int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int my_array[] = {10,20,30,40};
    int mySum = getSum(my_array,4);

    printf("The value of my sum = %d",mySum);

}