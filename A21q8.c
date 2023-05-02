//Write a program to store information of 10 students and display them using structure.
#include"stdio.h"
struct student
{
    int id;
    char name[50];
    int rollno;
    int class;
};
int main()
{
    struct student d[10];
    int i;
    for(i=0;i<10;i++)
    {
    fflush(stdin);
    printf("Enter student name ,id,class,rollno  ",i+1);
    scanf("%s",&d[0].name);
    fflush(stdin);
    scanf("%d",&d[i].id);
    scanf("%d",&d[i].rollno);
    fflush(stdin);
    scanf("%d",&d[i].class);
    }
return 0;
}
