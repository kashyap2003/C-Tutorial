#include <stdio.h>
#include <string.h>

union myUnion // It just over writes the value.
{
    int myInt;  // 4 bytes
    char myChar;// 1 bytes
}record;

struct myStruct
{
    int myInt;  // 4 bytes
    char myChar;// 1 bytes
};

int main()
{
    union myUnion uni;
    uni.myInt = 4;
    uni.myChar = 23;

    printf("The Size of struct = %d\n", sizeof(record));
    printf("The Size of Union = %d\n", sizeof(uni));

    printf("It giving 4 as size of struct because the program use padding so that's why it take only 4 multiple\nAnd in size of union is 4 because it take the maximum bytes of input variable.");
}