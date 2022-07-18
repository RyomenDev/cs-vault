#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
  *sum=a+b;
 *avg= *sum/2;
}

int main()
{
int i,j,sum;
float avg;
i=3;
j=6;
sumAndAvg(i,j,&sum,&avg);
printf(" THE Value of sum is %d\n",sum);
printf("the value of avg is %f\n",avg);
return 0;
}