#include<stdio.h>
int main()
{
printf("calculation of income tax given by an employee.\n");
float income, tax;
printf("the income of employee is:\n");
scanf("%f",&income);

if (income<250000)
{
    tax=0;
    printf("No tax for the income uder 2.5lakhs\n");
}
if (income>250000 && income<500000)
{
    tax=tax+0.05*(income-250000);
    printf("the tax of employee is %f",tax);
}
if (income>500000 && income<1000000)
{
    tax=tax+0.10*(income-500000);
    printf("the tax of employee is %f",tax);
}
if (income>1000000)
{
    tax=tax+0.20*(income-1000000);
    printf("the tax of employee is %f",tax);
}

return 0;
}