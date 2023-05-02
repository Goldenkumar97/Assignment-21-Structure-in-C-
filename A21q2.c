//Write a function to take input from employee data from the user.(Refer structure from Q1.).
#include"stdio.h"
struct employee 
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee e;
    fflush(stdin);
    printf("Enter Employee name :");
    gets(e.name);
    printf("Enter Employee id :");
    scanf("%d",&e.id);
    printf("Enter salary :");
    scanf("%f",&e.salary);
    printf("Employee id =%d , Employee name=%s and their salary =%f",e.id,e.name,e.salary);
return 0;
}