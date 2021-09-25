#include <stdio.h>
// Global Variable 
int global_v; // It always initialize it's value with 0 even if it haven't assigned any value to it.

int main(void)
{
    // Local Variable
    int local_v; // it will gave some garbage value if we didn't give any value to it.

    printf("Local = %d\n", local_v); 
    printf("Global = %d\n", global_v);
}