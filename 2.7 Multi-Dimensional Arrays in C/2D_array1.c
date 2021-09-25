#include <stdio.h>

int main(void)
{
    int array [3] [3] = {   // 1st [] for row and 2nd [] for column.
        {1,2,3},    // row 0
        {4,6,8},    // row 1
        {12,45,56}  // row 2
    };

    for (int i=0; i<3; i++) // for row 
    {
        for (int j=0; j<3; j++) // for column
        {
            printf("Array [%d] [%d] = %d\n",i,j,array [i] [j]); 
        }
    }
}