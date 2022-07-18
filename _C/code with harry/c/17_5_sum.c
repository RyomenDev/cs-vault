#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int sum (int a, int b);

int main()
{
int a=4,b=7;
printf("the value of a & b is %d and %d\n",a,b);
printf("the value of 4+7 =%d\n",sum(a,b));
printf("the value of a & b after function call is %d and %d", a,b);
return 0;
}

int sum(int a,int b)
{
    //return a+b;
    int c;
    c=a+b;
    a= 10;
    b=5;
    return c;
}