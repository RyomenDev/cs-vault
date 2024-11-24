#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
float average(int a, int b, int c);

int main()
{
    int a,b,c;
printf("enter the 1st value:\n");
scanf("%d",&a);
printf("enter the 2st value:\n");
scanf("%d",&b);
printf("enter the 3st value:\n");
scanf("%d",&c);

//average(a,b,c);
printf("the value of average is %f",average(a,b,c));
return 0;
}

float average(int a, int b, int c)
{
    float result;
    result= (float)(a+b+c)/3;
    return result;
}