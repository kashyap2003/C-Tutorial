#include <stdio.h>
#include <string.h>

union myUnion // It just over writes the value.
{
    int myInt;
    char myChar;
};



int main()
{
    union myUnion uni;
    uni.myInt = 4;
    uni.myChar = 23;

    printf("myInt = %d\n",uni.myInt);
    printf("myChar = %d\n",uni.myChar);
    printf("Both value are same becaue unions just over write the value of last input in every input.\nSo the last input is same for all Because of over writting.");
  
}