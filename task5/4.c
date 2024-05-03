// Define structure salary to store emp name, basic salary, hra, da, total salary. Get basic salary from
// user. Calculate hra as 25% and da as 10% of salary and total salary = basic+hra+da and display
// the same
#include<stdio.h>

struct salary 
{
    char name[20];
    float basic;
    float hra; 
    float da;
    float total;
}sal;


int main()
{
    struct salary sal;

    printf("Enter your name: ");
    scanf("%s", sal.name);

    printf("\nEnter your basic salary: ");
    scanf("%f", &sal.basic);

    sal.hra = 0.25 * sal.basic;

    sal.da = 0.10 * sal.basic;

    sal.total = sal.basic + sal.hra + sal.da;

    printf("\nThe total salary is %.2f", sal.total);

    return 0;
}
