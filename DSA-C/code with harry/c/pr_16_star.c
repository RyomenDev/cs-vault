#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void pattern(int n);

int main()
{
int n;
printf("enter the value:\n");
scanf("%d",&n);
pattern(n);
return 0;
}

void pattern(int n)
{
    if (n==1)
    {
         printf("*");
          printf("\n");
         return;
    }
    
    pattern(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}