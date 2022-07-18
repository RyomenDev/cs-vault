#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>


int main()
{
system("cls");
FILE*ptr;
ptr=fopen("zputchardemo.txt","w");
putc('c',ptr);
putc('b',ptr);
putc('a',ptr);

fclose(ptr);
getch();
return 0;
}