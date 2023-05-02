/*Write a program to enter the marks of 5 students in chemistry ,mathematic and physics (each out of 100)
using a structure named marks having elemnts roll no , name ,che,maths and phymarks anr then the percentage of each stduent.*/
#include "stdio.h"
struct marks {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
} student[5];

int main() {
    int i;
    for (i = 0; i < 5; ++i) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &student[i].roll_no);
        fflush(stdin);
        printf("Enter name: ");
        scanf("%s", student[i].name);
        printf("Enter marks in Chemistry: ");
        scanf("%f", &student[i].chem_marks);
        printf("Enter marks in Maths: ");
        scanf("%f", &student[i].maths_marks);
        printf("Enter marks in Physics: ");
        scanf("%f", &student[i].phy_marks);
    }
    for (i = 0; i < 5; ++i) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Roll number: %d\n", student[i].roll_no);
        printf("Name: %s\n", student[i].name);
        printf("Marks in Chemistry: %.2f\n", student[i].chem_marks);
        printf("Marks in Maths: %.2f\n", student[i].maths_marks);
        printf("Marks in Physics: %.2f\n", student[i].phy_marks);

        float total = student[i].chem_marks + student[i].maths_marks + student[i].phy_marks;
        float percentage = total / 3.0;
        printf("Percentage: %.2f%%\n", percentage);
    }
    return 0;
}