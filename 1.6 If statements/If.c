#include <stdio.h>

int main(void)
{
    int age;
    printf("Please enter your age:");
    scanf("%d", &age); // Age is integer that's why %d is used and to put or change variable value we have to put &(address) fo that.

    if (age > 18)
    {
        printf("Age is greater than 18.");
    }
    
    if (age == 18)
    {
        printf("Age is equal to 18.");
    }
    
    if (age < 18)
    {
        printf("Age is less than 18.");
    }
    
}