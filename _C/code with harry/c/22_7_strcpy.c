#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
char *st="there";
char st2[45];
strcpy(st2,st);//st is copied in st2.
printf("now the st2 is %s",st2);
return 0;
}