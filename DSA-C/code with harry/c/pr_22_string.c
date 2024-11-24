#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
char st1[34];
char st2[34];
char c;
int i=0;
printf("enter the value of first string:\n ");
scanf("%s",st1);
//fflush(stdin);
//scanf("%c",&c);
while (c!='\n')
{
    fflush(stdin);
   scanf("%c",&c);
  // printf("%c",c);
   st2[i]=c;
   i++;
}
st2[i]='\0';
//st2[i-i]='\0';

printf("the value of st1 is %s\n",st1);
printf("the value of st1 is %s\n",st2);
printf("strcap for these strings returns %d",strcmp(st1,st2));

return 0;
}