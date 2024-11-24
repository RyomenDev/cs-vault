//answer 5

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
        int n;
        scanf("%d", &n);
        int arr[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == 0 || odd == 0)
            printf("0\n");
        else if (even > odd)
        {
            if (odd % 2 == 0)
                printf("%d\n", odd / 2);
            if (odd % 2 != 0)
                printf("%d\n", even);
        }
        else if (even == odd)
        {
            if (odd % 2 == 0)
                printf("%d\n", odd / 2);
            if (odd % 2 != 0)
                printf("%d\n", even);
        }

        else
        {
            if ((odd > even) && (odd % 2 == 0))
            {
                if ((odd / 2) <= even)
                    printf("%d\n", odd / 2);
                if ((odd / 2) > even)
                    printf("%d\n", even);
            }
            else if ((odd > even) && (odd % 2 != 0))
                printf("%d\n", even);
        }
    }

    return 0;
}
*/
//answer 3

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
        int n;
        scanf("%d", &n);
        if (n % 4 == 0)
            printf("%d", n / 4);
        else
            printf("%d", (n / 4) + 1);
    }
    return 0;
}
*/
/*

//answer 2

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
        int x, y;
        scanf("%d %d", &x, &y);
        if (x >= (30 * y))
            printf("yes");
        else
            printf("no");
    }
    return 0;
}
*/

// answer 1

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
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < y)
            printf("FIRST\n");
        else if (y < x)
            printf("SECOND\n");
        else
            printf("ANY\n");
    }
    return 0;
}
*/