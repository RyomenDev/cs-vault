#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>
void pattern(int n, int m);


int main()
{
system("cls");
int n,m;
printf("enter the value:\n");
scanf("%d %d",&n,&m);
pattern(n,m);

getch();
return 0;
}


void pattern(int n,int m)
{  
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        printf("* ");
    }
    printf("\n");
} 
}
