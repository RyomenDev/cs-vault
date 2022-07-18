#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int random(int a)
{
    int i;
    int num = rand() % (a + 1);
    return num;
}

int fun(int n)
{
    int i;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return fun(i) + fun(n - 1 - i);
    }
}

int main()
{
    system("cls");
    fun(2);
    getch();
    return 0;
}