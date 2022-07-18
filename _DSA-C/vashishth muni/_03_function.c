#include <stdio.h>
#include <conio.h>
// void function(int x) // not work as only copy is trasferred
// {
//     x = 7;
//     printf("::%d::\n", x);
// }

void fun1(int *p)
{
    *p = 7;
    // printf(":%d:\n", x);
}

int main()
{
    // system("cls");
    int x = 3, *p;
    p = &x;
    printf("%d\n", x);

    // function(x);
    // printf("%d\n", x);

    fun1(p);
    // fun1(&x);
    printf("%d\n", x);

    getch();
    return 0;
}