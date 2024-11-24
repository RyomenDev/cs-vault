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
        int n, x, a;
        scanf("%d %d", &n, &x);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        // if (a[i] <= x)
        //{
        for (a = n - 1; a >= 0; a--)
        {
            if (arr[a] < x)
            {
                // printf("%d\n", a[0]);
                break;
            }
            // else
            //{
           // printf("0\n");
        }
            printf("%d\n", a+1);
            // }
            // }
        
    }
    return 0;
}


/*
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
        int n, x, i;
        scanf("%d %d", &n, &x);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (a[i] <= x)
        {
            for (i = 1; i < n; i++)
            {
                if (a[i] <= x)
                {
                    if (a[i] > a[0])
                    {
                        a[0] = a[i];
                    }
                }

                else
                {
                    continue;
                }
            }
            printf("%d\n", a[0]);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
*/