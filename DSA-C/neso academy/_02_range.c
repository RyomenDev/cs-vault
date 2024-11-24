#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<limits.h>


int main()
{
system("cls");
int var1=INT_MIN;
int var2=INT_MAX;
printf("range of signed integer is from : %d to %d",var1,var2); //-2147483648 to 2147483647

//unsigned int var3=UINT_MIN; wrong
unsigned int var3=0;
unsigned int var4=UINT_MAX;
printf("\nrange of unsigned integer is from : %u to %u",var3,var4); //0 to 4294967295


short int var5 = SHRT_MIN;
short int var6 = SHRT_MAX;
printf("\nrange of short signed integer is from : %d to %d", var5, var6); //-32768 to 32767
// wrong printf("\nrange of short signed integer is from : %u to %u", var5, var6);// 4294934528 to 32767

short unsigned int var7 = 0;
short unsigned int var8 = USHRT_MAX;
printf("\nrange of short unsigned integer is from : %d to %d", var7, var8); // 0 to 65535
printf("\nrange of short unsigned integer is from : %u to %u", var7, var8); // 0 to 65535

getch();
return 0;
}