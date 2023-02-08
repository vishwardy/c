#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee vishwa = {34, 5.2, "vishwa"};
    struct employee *ptr = &vishwa;
    printf("The name of vishwa is %s\n", vishwa.name);
    printf("The salary of vishwa is %d\n", vishwa.salary);
    printf("The hike of vishwa is %f\n", vishwa.hike);

    printf("The name of vishwa is %s\n", (*ptr).name);
    printf("The salary of vishwa is %d\n", (*ptr).salary);
    printf("The hike of vishwa is %f\n", (*ptr).hike);

    return 0;
}
