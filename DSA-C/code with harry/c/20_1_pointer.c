/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int a=6;
int *ptr;
ptr = &a;
printf("the address of variable a is %d\n",ptr);
printf("the value of variable a is %d\n", *ptr);
return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void printadd(int a)
{
printf("the address of variable a is %u\n", &a);
}

int main()
{
int i=4;
printf("the value of variable i is %u\n", i);
printadd(i);
printf("the address of variable i is %u\n", i);
printf("the address of variable i is %u\n", &i);
return 0;
}



