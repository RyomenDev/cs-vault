#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the number:\n");
    scanf("%d",&n);
printf("multipivation table of %d\n",n);
do
{
  i++;
  printf("%dx%d=%d\n",n,i,n*i);
    
}
 while (i<=10);


return 0;
}


/*
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the number:\n");
    scanf("%d",&n);
printf("multipivation table of %d\n",n);
while (i<=10)
{
    printf("%dx%d=%d\n",n,i,n*i);
i++;
}

return 0;
}
*/


/*#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
printf("multipivation table of %d\n",n);
for (int i = 1 ; i<=10 ; i++)
{
    printf("%dx%d=%d\n",n,i,n*i);
}

return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
printf("multipivation table of %d\n",n);
for (int i = 10; i ; i--)
{
    printf("nx%d=%d\n",n,i,n*i);
}

return 0;
}
*/