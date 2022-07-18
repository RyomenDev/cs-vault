#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int num, guess, nguess=1;
srand(time(0));
num=rand()%100+1;
//printf("the number is %d",num);
do
{
   printf("enter your guess:");
   scanf("%d",&guess);
   if (guess<num)
   {
       printf("higher num please.\n");
   }
   else if (guess>num)
   {
      printf("lower num please.\n");
   }
   else 
   {
       printf("you guessed the num in %d attemps\n.", nguess);
   }
    nguess++;
} while (guess!=num);

return 0;
}



/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int num;
srand(time(0));
num=rand()%100+1;
printf("the number is %d",num);
return 0;
}
*/


/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int num;
srand(time(0));
num=rand();
printf("the number is %d",num);
return 0;
}
*/
