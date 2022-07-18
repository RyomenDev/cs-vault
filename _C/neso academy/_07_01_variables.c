#include <stdio.h>
#include <conio.h>

int var1 = 10; // global variable
int var2;      // initially stores 0

int main()
{
    system("cls");
    int var1 = 56; // redefination allowed as it is in diff block
    // is local for main

    int var3; // store some garbage value //auto variable

    int varz = 34; // local varible for main
    // int varz =56; //redifination error
    {
        int varz = 67; // 67
        printf("varz:%d\n", varz);
        printf("var1:%d\n", var1);
    }
    printf("varz:%d\n", varz);   // 34
    printf("var1:%d\n", var1); // 34
    printf("var2:%d\n", var2); // 0
    printf("var3:%d\n", var3); // garbage value
    fun();
    getch();
    return 0;
}

int fun()
{
    // printf("%d\n",varz); // can't acess local varz
    printf("fun::%d\n", var1); // acess global variable
}