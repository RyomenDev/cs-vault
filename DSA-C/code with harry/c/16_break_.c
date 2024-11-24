#include<stdio.h>
int main()
{
int skip=5,i=0;
while (i<10)
{
    i++;
    if (i!=skip)
    {
        continue;
    }
    else
    {
        printf("%d\n", i);
    }
    
}

return 0;
}





/*#include<stdio.h>
int main()
{
    int i;
    printf("enter the value:\n");
    scanf("%d",&i);
do
{
printf("the value of i is %d\n",i);
if (i==4)
{
    break;
}
i++;
} 
while (i<10);

return 0;
}
*/