#include <stdio.h>
#include <string.h>

int main()
{
    char string1[12] = "Hello";
    char string2[12] = " World";
    char string3[12];

    strcpy(string3,string1); // It just copy atring1 to string3 :: strcpy(destination,source)
    strcat(string1, string2); // It just add string2 to string1 :: strcat(To add, from add)
    strlen(string3);

    printf("strcpy = %s\n",string3);
    printf("strcat = %s\n",string1);
    printf("strlen = %d",strlen(string3));
}