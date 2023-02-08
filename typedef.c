#include<stdio.h>
#include<string.h>

typedef struct employee {
    int salary;
    float hike;
    char name[10];
} emp;

int main(){
    int a = 45;
    emp vishwa = {34, 5.2, "vishwa"};
    emp *ptr = &vishwa;
    printf("The name of vishwa is %s\n", vishwa.name);
    printf("The salary of vishwa is %d\n", vishwa.salary);
    printf("The hike of vishwa is %f\n", vishwa.hike);

    printf("The name of vishwa is %s\n", (*ptr).name);
    printf("The salary of vishwa is %d\n", (*ptr).salary);
    printf("The hike of vishwa is %f\n", (*ptr).hike);

    return 0;
}
