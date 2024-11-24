
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int i = 34;
int*j;
j=&i;
printf("value of i = %d\n",i);
printf("value of i = %d\n",*j);
printf("address of i = %d\n",&i);
printf("address of i = %d\n",j);
printf("address of j = %d\n",*j);
printf("address of j = %d\n",&j);

printf("value of j = %d\n",*(&j));

return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int i = 34;
int*j;
*j=&i;
printf("value of i = %d\n",i);
printf("value of i = %d\n",*j);
return 0;
}
*/