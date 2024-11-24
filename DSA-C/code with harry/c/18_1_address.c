#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int i = 8;
int*j;      //stores address of i
j=&i;
printf("address of i = %d\n",&i);
printf("address of i = %d\n",j);
printf("address of i = %d\n",&j);
printf("value of i = %d\n",i);
printf("value of i = %d\n",&i);
printf("value of i = %d\n",*j); // gives the value in adress
return 0;
}