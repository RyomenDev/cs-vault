#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>


int main()
{
system("cls");
int day;
scanf("%d",&day);
switch(day){

  //  printf("abc"); //not evaluated

case 1:
printf("mon");
break;
case 2:
printf("tue");
break;
case 3:
printf("wed");
break;
case 4:
printf("thu");
break;
case 5:
printf("fri");
break;
case 6:
printf("sat");
break;
case 7:
printf("sun");
break;
default:
printf("invalid");

}
getch();
return 0;
}