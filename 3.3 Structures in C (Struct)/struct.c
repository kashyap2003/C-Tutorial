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
    struct student record;
    record.id = 35;
    strcpy(record.name,"Kashyap"); // I don't use record.name=Kashyap because they are saying Kashyap is undefine.
    record.percentage = 89.63;

    printf("Id = %d\n", record.id);
    printf("Name = %s\n", record.name);
    printf("Percentage = %f\n", record.percentage);
    
  
}