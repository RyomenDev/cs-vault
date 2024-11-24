#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int arr[10];
//int *ptr=&arr[0];
int*ptr=arr;
//int*ptr=arr[2];   WRONG
//ptr=ptr+2;
if(ptr==&arr[2])
{
    printf("these point to the same location in memory\n");

}
else{
    printf("these do not point at the same location\n");
}
return 0;
}