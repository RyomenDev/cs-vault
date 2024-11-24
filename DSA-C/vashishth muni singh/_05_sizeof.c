#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    int x;
    char ch;
    float f;
    double d;
    printf("int\n");
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(x));
    printf("float\n");
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(f));
    printf("double\n");
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(d));
    printf("char\n");
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(ch));

    printf("****\n");

    printf("%d\n", sizeof('A')); // treated as int ASCII
    printf("%d\n", (char)65);
    getch();
    return 0;
}