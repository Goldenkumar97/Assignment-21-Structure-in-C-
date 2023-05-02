//Define a structue Employee with member variables id,name,salary.
#include"stdio.h"
struct employee
{
    int  id;
    char name[50];
    float salary;
};
int main()
{
    struct employee e;
     
    printf("Enter employee id =");
    scanf("%d",&e . id);
    fflush(stdin);
    printf("Enter employee name =");
    gets(e.name);
    printf("Enter employee salary =");
    scanf("%f",&e . salary);
    return 0;
}