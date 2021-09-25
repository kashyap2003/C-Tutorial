#include <stdio.h>

int main(void)
{
    int array [2] [3] = {
        {1,2,3},    // row 0
        {4,6,8}     // row 1
    };

    for (int i=0; i<2; i++) // for row 
    {
        for (int j=0; j<3; j++) // for column
        {
            printf("Array [%d] [%d] = %d\n",i,j,array [i] [j]); 
        }
    }
}