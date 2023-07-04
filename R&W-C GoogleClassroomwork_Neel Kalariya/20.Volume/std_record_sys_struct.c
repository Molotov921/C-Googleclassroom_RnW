/*WAP to student record system using structure. Consider below mentioned attributes 
in Student’s structure:
1.stu_id
2.stu_name
3.stu_age
4.stu_course
5.stu_city
6.stu_std
7.stu_school*/
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 50
struct Student 
{
    int stu_id;
    char stu_name[MAX_LENGTH];
    int stu_age;
    char stu_course[MAX_LENGTH];
    char stu_city[MAX_LENGTH];
    int stu_std;
    char stu_school[MAX_LENGTH];
};
void displayStudent(struct Student student) 
{
    printf("Student ID = %d\n",student.stu_id);
    printf("Student Name = %s\n",student.stu_name);
    printf("Student Age = %d\n",student.stu_age);
    printf("Student Course = %s\n",student.stu_course);
    printf("Student City = %s\n",student.stu_city);
    printf("Student Standard = %d\n",student.stu_std);
    printf("Student School = %s\n",student.stu_school);
    printf("\n");
}
void main() 
{
    struct Student student;

    printf("Enter Student ID = ");
    scanf("%d",&(student.stu_id));
    getchar();

    printf("Enter Student Name = ");
    fgets(student.stu_name,MAX_LENGTH,stdin);
    student.stu_name[strcspn(student.stu_name,"\n")]='\0';

    printf("Enter Student Age = ");
    scanf("%d",&(student.stu_age));
    getchar();

    printf("Enter Student Course = ");
    fgets(student.stu_course,MAX_LENGTH,stdin);
    student.stu_course[strcspn(student.stu_course,"\n")]='\0';

    printf("Enter Student City = ");
    fgets(student.stu_city,MAX_LENGTH,stdin);
    student.stu_city[strcspn(student.stu_city,"\n")]='\0';

    printf("Enter Student Standard = ");
    scanf("%d",&(student.stu_std));
    getchar();

    printf("Enter Student School = ");
    fgets(student.stu_school,MAX_LENGTH,stdin);
    student.stu_school[strcspn(student.stu_school,"\n")]='\0';

    displayStudent(student);
}