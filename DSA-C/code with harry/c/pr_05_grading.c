#include<stdio.h>
int main()
{
printf("this program is to calculate the grade of students on basis of marks obtained.\n");
float marks;
printf("enter the marks obtained:");
scanf("%f",&marks);
if (marks<=100 && marks>90)
{
    printf("students have acheived A grade");
}
if (marks<=90 && marks>80)
{
    printf("students have acheived B grade");
}
else if (marks<=80 && marks>70)
{
    printf("students have acheived C grade");
}
else if (marks<=70 && marks>60)
{
    printf("students have acheived D grade");
}
else if (marks<=60 && marks>50)
{
    printf("students have acheived E grade");
}
else if (marks<=50 && marks>0)
{
    printf("students have acheived F grade");
}
else
{
    printf("invalid Marks Entered!!!");
}



return 0;
}