//FUNCTION WITHOUT ARGUMENT AND WITHOUT RETURN VALUE

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>

void add();//function declaration

void add(){//function defination
int a,b;
printf("enter two num:\n");
scanf("%d %d",&a,&b);
printf("sum of %d and %d is %d",a,b,a+b);
}

int main() //name,return type
{
system("cls");  //actual argument

add();//function call

getch();
return 0;
}