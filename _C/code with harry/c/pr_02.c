#include<stdio.h>;
int main()
{
printf("to find the area and perimeter of rectangle:\n");
float length, breadth, area , perimeter ;
printf("the lenth of recatangle is:");
scanf("%f",&length);
printf("the breadth of rectangle is:");
scanf("%f",&breadth);
perimeter=2*(length+breadth);
printf("the perimeter of rectangle is %f\n",perimeter);
area=length*breadth;
printf("the area of rectangle is %f",area);
return 0;
}