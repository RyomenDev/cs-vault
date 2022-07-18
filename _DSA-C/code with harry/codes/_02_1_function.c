#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void func(int n)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d,%d ", i, j);
            // printf("%d ",1);
        }
        printf("\n");
    }
}

int main()
{
    system("cls");
    func(4);
    getch();
    return 0;
}