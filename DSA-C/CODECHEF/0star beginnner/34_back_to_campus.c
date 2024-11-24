#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
scanf("%d",&t);
while (t--)
{
int n,k;
scanf("%d %d",&n,&k);
if(n%k==0){
    printf("%d\n",n/k);
}
else{
    printf("%d\n",(n/k)+1);
}
}
return 0;
}