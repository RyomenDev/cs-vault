/*
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if ((x != 0 && y != 0) && (x == y))
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
*/
/*
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x * 1.07 >= y)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        printf("%d\n", x * 50 * (1 - 0.2 + 02 + 0.3));
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int z;
        z = 2 * (n - 1);
        if (x + y <= n + 1)
        {
            if (y > x)
                printf("%d\n", z + (n - 1 + 2 * (x - 1)));
            else
                printf("%d\n", z + (n - 1 + 2 * (y - 1)));
        }
        else
        {
                if (y > x)
                    printf("%d\n", z + (n - 1 + 2 * (n-y)));
                else
                    printf("%d\n", z + (n - 1 + 2 * (n-x)));
        }
    }
    return 0;
}
*/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i = 0, j = 0;
        scanf("%d", &n);
        int h[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; i < n; j++)
            {
                if (h[i] = h[j] + 2)
                {
                    h[i] = h[j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            h[i]++;
            h[0]--;
        }
        while (h[i] = h[j] + 1)
        {
        }
    }
    return 0;
}