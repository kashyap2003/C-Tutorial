#include <stdio.h>

int main()
{
    int array[] = {23,54,67};
    int *pointer_array[3]; // We have to input the array and it's size to get the ans.

    for (int i = 0; i < 3; i++)
    {
        pointer_array[i] = &array[i]; // Assign the address of array element.
        printf("Value of array[%d] = %d\n",i,*pointer_array[i]);
    }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Value of array[%d] = %d\n",i,*pointer_array[i]);
    // }
    
}