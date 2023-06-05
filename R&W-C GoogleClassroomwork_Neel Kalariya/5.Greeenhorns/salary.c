/*wap to find net salary, take salary from user and
add 10% hra, 20% ta, 30% da then subtract 10% pf, and 200 rs as professional tax and find gross salary*/
#include <stdio.h>
void main()
{
    float salary, hra, ta, da, pf, professionalTax, netSalary, grossSalary;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    hra = 0.1 * salary;
    ta = 0.2 * salary;
    da = 0.3 * salary;

    netSalary = salary + hra + ta + da;

    pf = 0.1 * netSalary;
    professionalTax = 200;

    grossSalary = netSalary - pf - professionalTax;

    printf("Net Salary: %.2f\n", netSalary);
    printf("Gross Salary: %.2f\n", grossSalary);
}