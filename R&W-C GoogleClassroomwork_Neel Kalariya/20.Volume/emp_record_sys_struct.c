/*WAP to employee record system using structure. Consider below mentioned attributes 
in EmpDoyee’s structure:
1.emp_id
2.emp_name
3.emp_age
4.emp_role
5.emp_city
6.emp_experience
7.emp_company_name*/
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 50
struct Employee 
{
    int emp_id;
    char emp_name[MAX_LENGTH];
    int emp_age;
    char emp_role[MAX_LENGTH];
    char emp_city[MAX_LENGTH];
    int emp_experience;
    char emp_company_name[MAX_LENGTH];
};
void displayEmployee(struct Employee employee) 
{
    printf("Employee ID = %d\n",employee.emp_id);
    printf("Employee Name = %s\n",employee.emp_name);
    printf("Employee Age = %d\n",employee.emp_age);
    printf("Employee Role = %s\n",employee.emp_role);
    printf("Employee City = %s\n",employee.emp_city);
    printf("Employee Experience = %d\n",employee.emp_experience);
    printf("Employee Company Name = %s\n",employee.emp_company_name);
    printf("\n");
}
void main() 
{
    struct Employee employee;

    printf("Enter Employee ID = ");
    scanf("%d",&(employee.emp_id));
    getchar();

    printf("Enter Employee Name = ");
    fgets(employee.emp_name,MAX_LENGTH, stdin);
    employee.emp_name[strcspn(employee.emp_name,"\n")]='\0';

    printf("Enter Employee Age = ");
    scanf("%d",&(employee.emp_age));
    getchar();

    printf("Enter Employee Role = ");
    fgets(employee.emp_role,MAX_LENGTH,stdin);
    employee.emp_role[strcspn(employee.emp_role,"\n")]='\0';

    printf("Enter Employee City = ");
    fgets(employee.emp_city,MAX_LENGTH,stdin);
    employee.emp_city[strcspn(employee.emp_city,"\n")]='\0';

    printf("Enter Employee Experience Year = ");
    scanf("%d",&(employee.emp_experience));
    getchar();

    printf("Enter Employee Company Name = ");
    fgets(employee.emp_company_name,MAX_LENGTH,stdin);
    employee.emp_company_name[strcspn(employee.emp_company_name,"\n")]='\0';

    displayEmployee(employee);
}