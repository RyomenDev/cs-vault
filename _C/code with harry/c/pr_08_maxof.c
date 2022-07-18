#include<stdio.h>
int main()
{
int i1, i2, i3, i4 ;
printf("enter the 4 integers:\n");
//scanf("%d, %d, %d, %d", &i1, &i2, &i3, &i4);
scanf("%d", &i1);
scanf("%d", &i2);
scanf("%d", &i3);
scanf("%d", &i4);

if (i1>i2 && i1>i3 && i2>i4)
{
 printf("the gratest integer is %d", i1);
}
if (i2>i1 && i2>i3 && i2>i4)
{
 printf("the gratest integer is %d", i2);
}
if (i3>i2 && i3>i1 && i3>i4)
{
 printf("the gratest integer is %d", i3);
}
if (i4>i2 && i4>i3 && i4>i1)
{
 printf("the gratest integer is %d", i4);
}

return 0;
}