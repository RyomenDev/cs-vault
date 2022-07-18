#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    int a, b;
    printf("enter:");
    char q;
    // scanf("%d%d",&a,&b);
    // scanf("%d%d%c",&a,&b,&q); ---->not working
    scanf("%d", &a);
    // fflush;
    scanf("%d", &b);
    fflush(stdin);
    scanf("%c", &q);
    // fflush;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%c\n", q);
    getch();
    return 0;
}