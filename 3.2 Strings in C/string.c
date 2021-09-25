#include <stdio.h>

int main()
{
    // You can write string as this two types given below.

    char string[6] = {'H','e','l','l','o'};
    char other_string[] = "Hello";

    printf("My string value = %s\n",string);
    printf("My other string value = %s",other_string);
}