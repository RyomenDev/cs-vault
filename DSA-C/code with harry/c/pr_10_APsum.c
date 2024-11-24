#include<stdio.h>
int main()
{
    int i,f,sum=0;
printf("the initial value is:");
scanf("%d",&i);
printf("the final value is:");
scanf("%d",&f);
do
{
    sum+=i;
    i++;
} 
while (i<=f);

printf("the sum is %d",sum);

    return 0;
}


/*#include<stdio.h>
int main()
{
int i,sum=0, n;
printf("the first number is :\n");
scanf("%d",&i);
printf("the last number is :\n");
scanf("%d",&n);
while (i<=n)
{
  sum+=i;
  i++;
}
printf("the sum of values from %d to %d is %d",i,n,sum);
//problem in i.

    return 0;
}
*/


/*#include<stdio.h>
int main()
{
int i=1, sum=0,n=10;
while (i<=n)
{
    sum+=i;
    i++;
}
printf("the value of sum of 1 to 10 is %d",sum);

    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
int a,sum=0,n;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of n:");
scanf("%d",&n);

for(int i=a;i<=n;i++)
{
    sum +=i;
}
printf("the value of sum %d to %d is %d\n",a,n,sum);
return 0;
}
*/

/*
#include<stdio.h>>
int main()
{
int i,sum=0,n=10;

for ( i = 0; i <= n; i++)
{
    sum +=i;
}
printf("the value of sum 1 to 10 is %d", sum);

return 0;
}
*/