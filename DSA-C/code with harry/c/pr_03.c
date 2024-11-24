#include<stdio.h>;
int main()
{
printf("to find the simple intrest of given principle amount for specific amount:\n");
printf("enter the principal amount:");
float intrest, principal, rate, time;
scanf("%f",&principal);
rate=5;
printf("enter the time duration:");
scanf("%f",&time);
intrest=(principal*rate*time)/100;
printf("the simple intrest for given amount is %f",intrest);

return 0;
}