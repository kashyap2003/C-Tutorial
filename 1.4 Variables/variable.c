#include <stdio.h>

int main(void)
{
  /*  
    2foo        (must not begin with a digit) 
    my foo      (spaces are not allowed)
    $foo        (special charachter not allowed except '_')
    while       (Language keywords cannot be used as name)
    */
    int age;
    age = 18;
    float pi=3.14;
    char c='K';
    double big_pi= 3.14575869;
    printf("My age is %d\n", age);
    printf("The value of pi is %f\n", pi);
    printf("1st letter of my name is %C\n", c);
    printf("The value of pi is %lf\n", big_pi);
}