#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//void wrong_swap(int a,int b);
void swap(int *a,int *b); 

int main()
{
    int x=3, y=4;
    printf("the value of x & y before swap is %d and %d\n",x,y);
   //wrong_swap(x,y);
  swap(&x,&y);
    printf("the value of x and y is %d and %d\n",x,y);

return 0;
}

// void wrong_swap(int a,int b)
// {
// int temp;
// temp=a;
// a=b;;
// b=temp;
// }

void swap(int *a,int *b)
{
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
}