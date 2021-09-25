#include <stdio.h>

int main(void)
{
    int array[] = {23,15,7,34,56,46};

    array[2] = 98; // This will change the value of 7 to 98 in array.

    for (int i = 0; i < 6; i++)
    {
        printf("element[%d]=%d\n",i,array[i]);
    }
    
}