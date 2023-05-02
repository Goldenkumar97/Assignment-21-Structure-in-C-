//Write a function to display employee data (refer structure from Q1.).
#include "stdio.h"
#include "string.h"
struct employee
{
    char id[20];
    char name[20];
    float salary;
};
void display(struct employee x)
{
    printf(" Employee id=%s,employee name =%s and employee salary=%f", x.id, x.name, x.salary);
}
struct employee input()
{
    struct employee e1;
    printf("enter id = ");
    fgets(e1.id, 20, stdin);
    e1.id[strlen(e1.id) - 1] = '\0';
    fflush(stdin);
    printf("enter name = ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';

    printf("enter salary = ");
    scanf("%f", &e1.salary);
    return e1;
}
int main()
{
    struct employee e2;
    e2 = input();
    display(e2);
    return 0;
}
