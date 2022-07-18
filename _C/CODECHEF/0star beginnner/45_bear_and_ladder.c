#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int q;
    scanf("%d", &q);
    while (q--)
    {
        int a, b;
        int n = 1;
        scanf("%d %d", &a, &b);
        if ((a % 2 != 0) && (b == a + 1)) // 2n+1,2n+2
            printf("YES\n");
        else if ((a % 2 == 0) && (b == a - 1)) // 2n,2n-1
            printf("YES\n");
        else if ((a % 2 == 0) && (b == a + 2)) // even
            printf("YES\n");
        else if ((a % 2 != 0) && (b == a + 2)) // odd
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}