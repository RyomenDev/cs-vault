#include<stdio.h>;
int main()
{
int num;
printf("enter an integer:");
scanf("%d", &num);
//true if num is perfectly divisible by 2

if(num%2==0)
{
printf("the num %d is even\n", num);
}
else
{
    printf("the num %d is odd\n", num);
}
return 0;
}