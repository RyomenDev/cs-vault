#include<stdio.h>;
int main()
{
int age;
printf("person can drive if the age is in between 18 & 70.\n");
printf("enter the age of person:\n");
scanf("%d", &age);
if ((age>18 && age<70)||(age==000))
//  || stands for or
//&& stands for and
// ! is :"not"
{
printf("the person can drive.");
}
else
{
    printf("the person cannot drive");
}

return 0;
}