#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int r1, w1, c1;
        int r2, w2, c2;
        int a = 0, b = 0;
        scanf("%d %d %d", &r1, &w1, &c1);
        scanf("%d %d %d", &r2, &w2, &c2);
        // if ((r1>r2 && w1>w2) || (r1>r2 && c1>c2) || (w1>w2 && c1>c2))
        // {
        //     printf("a\n");
        // }
        // else
        // {
        //     printf("b\n");
        // }
        if (r1 > r2)
            a++;
        else
            b++;

        if (w1 > w2)
            a++;
        else
            b++;

        if (c1 > c2)
            a++;
        else
            b++;

        if (a > b)
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}