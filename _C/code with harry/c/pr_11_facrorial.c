#include<stdio.h>
int main()
{
    int i=1,n, fact=1;
printf("enter the value\n");
scanf("%d",&n);
while (i<=n)
{
    fact*=i;
    i++;
}
printf("the factorail of value is %d",fact);

return 0;
}


/*
#include<stdio.h>
int main()
{
int i=1,n, fact=1;
printf("enter the value\n");
scanf("%d",&n);

do
{
   fact*=i;
   i++;
}
 while (i<=n);

 printf("the factorail of value is %d",fact);
return 0;
}
*/


/*#include<stdio.h>
int main()
{
//calculation of factorail of a number
int n, fact=1;
printf("enter the value\n");
scanf("%d",&n);

for (int i=1; i<=n; i++)
{
   fact*=i;
}
 printf("the factorail of value is %d",fact);

return 0;
}
*/