#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee vishwa;
    strcpy(vishwa.name, "vishwa");
    vishwa.hike = 5.3;
    vishwa.salary = 100000;

    printf("The name of the employee is %s\n", vishwa.name);
    printf("The salary of the employee is %d\n", vishwa.salary);
    printf("The hike of the employee is %f\n", vishwa.hike);



    return 0;
}
