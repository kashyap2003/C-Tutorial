#include <stdio.h>

int main(void)
{
    int a;
    printf("A:");
    scanf("%d", &a);

    switch (a)
    {
        case 1:
        case 4:     // Now will run for input 1,4 and 5 because break is not there.Due to break we jump out of switch
        case 5:
        printf("Kashayp");
        break;      // Helps to jump out of the switch without running next programms which is not needed to us.
        case 2:
        printf("Vinay");
        break;
        case 3:
        printf("Shahare");
        break;
        default:    // If nothing matches in input then default case will run.
        printf("Don't Match with 1,2 or 3");
    }
}