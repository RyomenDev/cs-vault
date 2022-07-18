#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int marks[4];
int *ptr;
//ptr=&marks[0];
ptr= marks;
for(int i=0;i<5;i++)
{
    printf("enter the value of marks for student %d:\n",i+1);
    scanf("%d",ptr);
    ptr++;
}
for(int i=0;i<5;i++)
{
    printf("the value of student %d is %d\n",i+1,marks[i]);
}
return 0;
}