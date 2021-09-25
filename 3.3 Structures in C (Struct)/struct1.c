#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};


int main()
{
    struct student record1;
    record1.id = 35;
    strcpy(record1.name,"Kashyap"); // I don't use record1.name=Kashyap because they are saying Kashyap is undefine.
    record1.percentage = 89.63;

    printf("Id = %d\n", record1.id);
    printf("Name = %s\n", record1.name);
    printf("Percentage = %f\n\n", record1.percentage);


    struct student record2;
    record2.id = 24;
    strcpy(record2.name,"Shruti"); // I don't use record1.name=Kashyap because they are saying Kashyap is undefine.
    record2.percentage = 95.46;

    printf("Id = %d\n", record2.id);
    printf("Name = %s\n", record2.name);
    printf("Percentage = %f\n", record2.percentage);
    
  
}