#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee vishwa, abhi, rahul;
    printf("Enter the details for vishwa\n");
    printf("Enter name for vishwa\n");
    scanf("%s", vishwa.name);
    printf("Enter salary for vishwa\n");
    scanf("%d", &vishwa.salary);
    printf("Enter hike for vishwa\n");
    scanf("%f", &vishwa.hike);


    printf("Enter the details for rahul\n");
    printf("Enter name for rahul\n");
    scanf("%s", rahul.name);
    printf("Enter salary for rahul\n");
    scanf("%d", &rahul.salary);
    printf("Enter hike for rahul\n");
    scanf("%f", &rahul.hike);


    printf("Enter the details for abhi\n");
    printf("Enter name for abhi\n");
    scanf("%s", abhi.name);
    printf("Enter salary for abhi\n");
    scanf("%d", &abhi.salary);
    printf("Enter hike for abhi\n");
    scanf("%f", &abhi.hike);

    
    printf("The name of vishwa is %s\n", vishwa.name);
    printf("The salary of vishwa is %d\n", vishwa.salary);
    printf("The hike of vishwa is %f\n", vishwa.hike);

    printf("The name of rahul is %s\n", rahul.name);
    printf("The salary of rahul is %d\n", rahul.salary);
    printf("The hike of rahul is %f\n", rahul.hike);

    printf("The name of abhi is %s\n", abhi.name);
    printf("The salary of abhi is %d\n", abhi.salary);
    printf("The hike of abhi is %f\n", abhi.hike);



    return 0;
}
