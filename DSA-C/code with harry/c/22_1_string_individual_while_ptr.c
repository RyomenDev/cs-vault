#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
char str[]={'A','A','K','A','S','H','\0'};
//char str[]="AAKASH";
char*ptr=str;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}