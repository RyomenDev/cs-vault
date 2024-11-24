#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

struct employee
{
   int id;
   float salary;
   char name[20];
};


int main()
{
    struct employee e1;
    e1.id=543;
    e1.salary=43.54;
   //(e1.name,"BERLIN");---> not work
  strcpy(e1.name,"BERLIN");

  printf("%d\n",e1.id);
  printf("%f\n",e1.salary);
  printf("%s\n",e1.name);
   
  //or
  /*
 struct employee e1,e2,e3;
 printf("enter the id of e1:");
 scanf("%d",&e1.id);
 printf("enter the salary of e1:");
 scanf("%f",&e1.salary);
 printf("enter the NAME of e1:");
 scanf("%S",e1.name);

 printf("enter the id of e2:");
 scanf("%d",&e2.id);
 printf("enter the salary of e2:");
 scanf("%f",&e2.salary);
 printf("enter the NAME of e2:");
 scanf("%S",e2.name);

 printf("enter the id of e3:");
 scanf("%d",&e3.id);
 printf("enter the salary of e3:");
 scanf("%f",&e3.salary);
 printf("enter the NAME of e3:");
 scanf("%S",e3.name);
 */
return 0;
}