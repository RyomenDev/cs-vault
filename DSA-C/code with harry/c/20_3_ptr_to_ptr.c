#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int i=123;
int *ptr;
int **ptr_ptr;

ptr=&i;
ptr_ptr=&ptr;

printf("the value of i is %d", **ptr_ptr);
return 0;
}