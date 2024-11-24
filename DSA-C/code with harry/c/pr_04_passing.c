#include<stdio.h>
int main()
{
float physics , maths , chemistry;
printf("the marks obtained in physics:");
scanf("%f", &physics);

printf("the marks obtained in maths:");
scanf("%f",&maths);

printf("the marks obtained in chemistry:");
scanf("%f",&chemistry);

printf("the percentage obtained in physics is %f\n",physics);
printf("the percentage obtained in maths is %f\n",maths);
printf("the percentage obtained in chemistry %f\n",chemistry);

printf("the total percentage obtained is %f\n",(maths+chemistry+physics)/3);

if ((maths+chemistry+physics)/3>33 && (maths>33) && (chemistry>33) && (maths>33))
{
   printf("student is passesd");
}
else
{
printf("student is not passed");
}
return 0;
}