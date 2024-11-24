// # 3:40
#include <iostream>
#include <conio.h>
// #include <string.h>
using namespace std; 

int unique(int arr[],int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];
        printf("%d %d %d\n",i,arr[i],xorsum);
    }
    return xorsum;
}

int main()
{
int arr[]={2,4,6,3,4,6,2};
int n= sizeof(arr)/sizeof(int);
// printf("%d",n);
int x = unique(arr,n);
printf("%d",x);


return 0;
}