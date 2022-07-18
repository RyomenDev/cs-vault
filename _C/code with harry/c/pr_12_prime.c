#include<stdio.h>
int main()
{
int i=2,n;
printf("enter the value:\n");
scanf("%d",&n);

while (i<n)
{
if(n%i==0)
{
    printf("the value is not prime.");
}
else
{
    printf("the value is prime.");
}
    i++;
}


return 0;
}


/*
#include<stdio.h>
int main()
{
int n=2, prime=1;
for (int i = 2; i < n; i++)
{
    if (n%1==0)
    {
        prime=0;
        break;
    }
    
}
if (prime==0)
{
   printf("this is not a prime number.");
}
else
{
    printf("this is a prime number.");
}


return 0;
}
*/