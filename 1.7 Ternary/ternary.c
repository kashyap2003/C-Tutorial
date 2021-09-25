#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("Enter A: ");
    scanf("%d",&a);

    printf("Enter B: ");
    scanf("%d", &b);

    // The Ternary (condition) operator in C

    // (Logical expression goes here) ? (if non zero (True)) : (If 0 (False))

    c = (a>b) ? printf("A ia greater than B") : printf("B is Greater than A");
}