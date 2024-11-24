
#include<stdio.h>
int main()
{
int num;
printf("enter the number:\n");
scanf("%d",&num);

if(num==0)
{
    printf("the number is 0");
}
else if (num==1)
{
printf("the number is 1");
}
else if (num==2)
{
  printf("the number is 2");
}
else if (num==3)
{
printf("the number is 3");
}
else
{
printf("the number is not 0,1,2,3");
}

return 0;
}





/*
#include<stdio.h>
int main()
{
int num;
printf("enter the number:\n");
scanf("%d",&num);
if(num%2==0)
{
    printf("the number is divisible by 2");
}
else if (num%3==0)
{
printf("the number is divisible by 3");
}
else if (num%5==0)
{
  printf("the number is divisible by 5");
}
else if (num%7==0)
{
printf("the number is divisible by 7");
}
else
("the number is not divisible by 2,3,5,7");

return 0;
}
*/