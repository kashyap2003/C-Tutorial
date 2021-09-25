#include <stdio.h>

int Product(int a, int b) // For returning value we have to put int Because we are inputing and giving int value. 
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

    int Multiplication; // We have to int Multiplication Because return will returning value so we have to put product as something.
    Multiplication = Product(x,y);
    printf("Product = %d", Multiplication);
}