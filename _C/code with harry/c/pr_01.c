#include<stdio.h>;
int main()
{
printf("this program is to convert Celsius into fahrenheit\n");
printf("Enter the temerature in celsius:");
float celsius, fahrenheit ;
scanf("%f", &celsius);

fahrenheit=(celsius*9/5)+32;
printf("the temperature in fahrenheit is %f", fahrenheit);
return 0;

}