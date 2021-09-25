#include <stdio.h>

void Sum(int a, int b)
{
    int add = a+b;
    printf("Sum = %d\n", add);
}

int main(void)
{
    int x,y;
    printf("Enter two numbers to get their Addition.\n");
    printf("A:");
    scanf("%d",&x);
    printf("B:");
    scanf("%d",&y);
    Sum(x,y);
}