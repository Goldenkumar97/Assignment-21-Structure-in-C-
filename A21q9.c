//Write a program to store information of n students display them, using structure .
#include"stdio.h"
struct students
{
    int id;
    char name[50];
    int class;
    int rollno;
};
int main()
{
    int i,x;
     printf("Enter no store information of students :");
    scanf("%d",&x);
    struct students n[x];
    for(i=0;i<x;i++)
    {
        printf("Enter Student name, id, class, rollno =");
        fflush(stdin);
        gets(n[i].name);
        scanf("%d%d%d",&n[i].id,&n[i].class,&n[i].rollno);   
    }
    for(i=0;i<x;i++)
    {
        printf("Student name=%s,id=%d,class=%d,roll no=%d \n",n[i].name,n[i].id,n[i].class,n[i].rollno);
    }
    return 0;
}