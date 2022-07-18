#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
char st1[45]="hello";
char*st2="harry";
int val=strcmp(st1,st2);
printf("now the val is %d\n",val);
//
int bal=strcmp(st2,st1);
printf("now the val is %d\n",bal);

return 0;
}