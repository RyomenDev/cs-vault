#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void change(int a);

int main()
{
int b = 33;
printf("the value of b before chamge is %d\n",b);
change(b); //function call
printf("the value of b after change is %d\n",b);
return 0;
}

void change(int a)
{
a = 77;
}