#include <stdio.h>
// Global Variable 
int global_v = 54; // It always initialize it's value with 0 even if it haven't assigned any value to it.

void name()
{
    printf("Global = %d\n", global_v);
    printf("See now here is no Local Variable That's why this give the value of 54\n");
}

int main(void)
{
    name();

    // Local Variable
    int global_v = 23; // it will gave some garbage value if we didn't give any value to it.
 
    printf("Global = %d\n", global_v);

    printf("See the answer is 23 but not 54 Because Local variable have more preference than Global Variable.\n ");

}