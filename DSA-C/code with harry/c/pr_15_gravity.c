#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
float force(float mass);

int main()
{
float m;
printf("enter the value of mass in kgs\n");
scanf("%f",&m);
printf("the value of the force is %f\n", force(m));
return 0;
}

float force(float mass)
{
    float g=9.8;
    float result=mass*g;
    
    return result;
}