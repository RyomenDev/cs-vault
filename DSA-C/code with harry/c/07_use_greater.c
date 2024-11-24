#include<stdio.h>;
int main()
{
int age;
printf("enter the age of person:\n");
scanf("%d", &age);
if (age>18)
{
printf("the person can drive.");
}
else
{
    printf("the person cannot drive");
}

return 0;
}