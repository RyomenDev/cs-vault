#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
 typedef struct complex
 {
     int real;
     int img;
 }comp;

 void display(comp c){ 
printf("the value of real part is %d\n",c.real);
printf("the value of imaginary part is %d\n",c.img);
 }
 

int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real value for %d num\n",i+1);
        scanf("%d",&cnums[i].real);
        printf("enter the imaginary value for %d num\n",i+1);
        scanf("%d",&cnums[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    



return 0;
}