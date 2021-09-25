#include <stdio.h>

int Product(int a, int b) // For returning value we have to put int. 
{
    return (a*b); // It will return value to the Product after a*b.
}

int main(void)
{
    int x,y;
    printf("Enter two numbers to get their Product.\n");
    printf("A:");
    scanf("%d",&x);
    printf("B:");
    scanf("%d",&y);

    Product(x,y);
    printf("Product = %d",Product(x,y));
}