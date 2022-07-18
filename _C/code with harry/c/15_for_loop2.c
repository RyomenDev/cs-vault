/*
#include<stdio.h>
int main()
{
for(int a=0; a<10; a++)
{
printf("the value of a is %d\n",a);
}
return 0;
}
*/

/*
#include<stdio.h>
int main()
{
int a,n;
printf("enter the starting value:\n");
scanf("%d",&a);
printf("enter the end value:\n");
scanf("%d",&n);
for (int i=a; i<=n; i++)
{
   printf("the values in between are:%d\n",i);
}

return 0;
}
*/

/*
#include<stdio.h>
int main()
{
for (int i=0; i<10; i++)
{
printf("the value of a is %d\n",i+1);
}

return 0;
}
*/

#include<stdio.h>
int main()
{
int  a;
printf("ENTER THE VALUE OF a:\n");
scanf("%d",&a);

for (int i = a; i ; i--)
{
    printf("the value of i is:%d\n",i);
}

return 0;
}