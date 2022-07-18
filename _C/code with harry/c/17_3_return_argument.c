
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int sum(int a, int b);


int main()
{
int a,b,c;
printf("enter the value of a:");
scanf("%d", &a);
printf("enter the value of b:");
scanf("%d", &b);

c= sum(a,b); //function call
printf("the value of c is %d", c);
return 0;
}

 int sum(int a, int b)
 {
int result;
result=a+b;
return result;
 }


/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int sum(int a, int b);


int main()
{
int a,b,c;
printf("enter the value of a:");
scanf("%d", &a);
printf("enter the value of b:");
scanf("%d", &b);

c= sum(a,b); //function call
printf("the value of c is %d", c);
return 0;
}

 int sum(int a, int b)
 {
int c;
c=a+b;
return c;
 }
 */

