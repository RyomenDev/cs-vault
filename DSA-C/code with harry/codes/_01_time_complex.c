#include <stdio.h>

int main()
{
    system("cls");
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int j = 0; j < 10; j++)
                count++;
        }
    }
    printf("%d\n", count); // 1000 n^3

    getch();
    return 0;
}