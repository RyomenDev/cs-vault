#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>


int main()
{
system("cls");
FILE*ptr1;
ptr1=fopen("zgetcdemo.txt","r");
// char c=fgetc(ptr1); 
// printf("the value of mu charecter is %c\n",c);

//  printf("the value of mu charecter is %c\n",fgetc(ptr1));
//  printf("the value of mu charecter is %c\n",fgetc(ptr1));
//  printf("the value of mu charecter is %c\n",fgetc(ptr1));
//  printf("the value of mu charecter is %c\n",fgetc(ptr1));
//  printf("the value of mu charecter is %c\n",fgetc(ptr1));

char c;
//c=fgetc(ptr1);
while(c!=EOF){      //EOF--> end of file > when all content of a file has been read , break the loop
    printf("%c",c);
    c=fgetc(ptr1);
}
fclose(ptr1);
getch();
return 0;
}