// Gross salary calculation

#include <stdio.h>
int main()
{
    int basic_salary, HRA, DA, gross_salary;
    printf("Enter the basic_salary : \n");
    scanf("%d", &basic_salary);

    if (basic_salary <= 10000)
    {
        HRA = (basic_salary / 100 * 20);
        DA = (basic_salary / 100 * 80);
    }
    else if (10001 < basic_salary <= 20000)
    {
        HRA = (basic_salary / 100 * 25);
        DA = (basic_salary / 100 * 90);
    }
    else if (basic_salary >= 20001)
    {
        HRA = (basic_salary / 100 * 30);
        DA = (basic_salary / 100 * 95);
    }
    gross_salary=basic_salary + HRA + DA;
    printf("the gross_salary is : %.2d", gross_salary);
    return 0;
}