/*Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using 
a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and 
then display the percentage of each student.*/
#include<stdio.h>
union Student 
{
    struct 
    {
        int roll_no;
        char name[50];
        int chem_marks;
        int maths_marks;
        int phy_marks;
    };
    int marks[5];
};

float calculatePercentage(union Student student) 
{
    int total_marks=student.chem_marks+student.maths_marks+student.phy_marks;
    return(float)total_marks/3.0;
}
void main() 
{
    union Student students[5];

    for(int i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d:\n",i+1);
        printf("Roll No = ");
        scanf("%d",&students[i].roll_no);
        printf("Name = ");
        scanf("%s",students[i].name);
        printf("Chemistry Marks = ");
        scanf("%d",&students[i].chem_marks);
        printf("Mathematics Marks = ");
        scanf("%d",&students[i].maths_marks);
        printf("Physics Marks = ");
        scanf("%d",&students[i].phy_marks);
        printf("\n");
    }

    for(int i = 0; i < 5; i++) 
    {
        float percentage=calculatePercentage(students[i]);
        printf("Percentage for student %d (%s):%.2f%%\n",students[i].roll_no,students[i].name,percentage);
    }
}