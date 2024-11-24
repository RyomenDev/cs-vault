#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");
    unsigned int var1a = 4294967295; // 4294967295
    unsigned int var1b = 4294967296; // 0
    unsigned int var1c = 4294967297; // 1
    printf("%u\n", var1a);
    printf("%u\n", var1b);
    printf("%u\n", var1c);

    int var2a = 2147483647;  // 2147483647
    int var2b = 2147483648;  //-2147483648
    int var2c = 2147483649;  //-2147483647
    int var2d = -2147483648; //-2147483648
    int var2e = -2147483649; // 2147483647
    int var2f = -2147483650; // 2147483646
    printf("%d\n", var2a);
    printf("%d\n", var2b);
    printf("%d\n", var2c);
    printf("%d\n", var2d);
    printf("%d\n", var2e);
    printf("%d\n", var2f);

    getch();
    return 0;
}