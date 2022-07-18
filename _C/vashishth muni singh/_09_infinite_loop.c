#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    for (int i = 1;; i++)
    // int i=0;
    // for(;;i++)
    {
        printf("%d", i);
        if (i == 20)
        {
            break;
        }
    }

    printf("**************************");
    int j = 0;
    while (1)
    {

        printf("%d", j);
        if (j == 10)
        {
            break;
        }
        j++;
    }
    getch();
    return 0;
}