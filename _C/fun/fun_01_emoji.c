#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


void main()
{
    int i,j,n;
    printf("enter no.=");
    scanf("%d",&n);
    for (i=1; i <= n; i++)
    {
       for ( j = 1; j <= i; j++)
       {
           printf(":)");
       }
       printf("\n");
    }
    

//return 0;
}