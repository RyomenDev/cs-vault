#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void printarray(int *ptr,int n)
{
    for (int i = 0; i<7; i++)
    {
        printf("the value of element %d is %d\n",i+1,*(ptr+i));
        // printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=65;
}

int main()
{
int arr[]={1,3,5,6,5,2,9};
printarray(arr,7);
return 0;
}