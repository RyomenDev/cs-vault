#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int x_();
int y_();

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, k;
        int x1 = 0, y1 = 0;
        scanf("%d %d %d", &x, &y, &k);
        x1 = x_(k, x1, x);
        y1 = y_(k, y1, y);

        if ((x1 == x) && (y1 == y))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

int x_(int k, int x1, int x)
{
    if (x >= 0)
    {
        while ((x1 != x) && (x1 <= x))
        {
            x1 = x1 + k;
        }
    }
    if(x<0)
    {
        while ((x1 != x) && (x1 >= x))
        {
            x1 = x1 - k;
            if (x1 < x)
                ;
        }
    }

    return x1;
}

int y_(int k, int y1, int y)
{
    int break1 = 0;
    if (y1 >= 0)
    {
        while ((y1 != y) && (y1 <= y))
        {
            y1 = y1 + k;
        }
    }
    if(y<0)
    {
        while ((y1 != y) && (y1 >= y))
        {
            y1 = y1 - k;
        }
    }

    return y1;
}