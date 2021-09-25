#include <stdio.h>
// This also give the same Result as prevoius one codes.
void function(); // This is known as prototyping of function or Forward Declaration of Function.
int main(void)
{
    function();
    function();
    function();
}
void function()
{
    printf("%d March %d\n", 23, 2003);
    printf("This is my Birth date.\n");
}
