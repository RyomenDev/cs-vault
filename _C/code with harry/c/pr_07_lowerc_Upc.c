#include<stdio.h>
int main()
{
//to check whether the alphabet is in upper or lower case

char alpha;
printf("enter the character:");
scanf("%ch", &alpha);
if (alpha>65 && alpha<90)
{
    printf("the character is in uppercase.\n");
}
else if (alpha>97 && alpha<122)
{
    printf("the character is in lower case");
}
else
{
printf("Invalid character");
}


return 0;
}