#include <stdio.h>

int main(void)
{
    int i =0;
    do
    {
        printf("The value of i = %d\n", i);
        i++;
    } while (i>5);

    
    printf("***********************************\n");


    int j=0;
    while (i>10)
    {
        printf("The value of j = %d",j);
        j++;
    }
    printf("See do while loop executes once before checking the condition but while loop 1st check the condition and if it is satisfied then run it.");
}

// difference b/w while and do_while loop is that 

// While loop 1st check and then execute programm but Do_while loop 1st run Once a time programm and then check the condition.