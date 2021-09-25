#include <stdio.h>
#include <string.h>

int main()
{
    char string1[12] = "Hello";
    char string2[12] = "World";
    char string3[12];

    strcpy(string3,string1); // It just copy atring1 to string3 :: strcpy(destination,source)
    strcat(string1, string2); // It just add string2 to string1 :: strcat(To add, from add)
    int length = strlen(string1);

    printf("strcpy = %s\n",string3);
    printf("strcat = %s\n",string1);
    printf("strlen = %d\n", length);

    int value = strcmp(string1, string2); // I don't get it what is this doing. Internet says
    printf("strcmp = %d", value);  // strcmp is used to compare two different C strings. When the strings
                                   //passed to strcmp contains exactly same characters in every index and
                                   //have exactly same length, it returns 0.
}