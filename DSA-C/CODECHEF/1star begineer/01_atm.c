#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k)
            {
                printf("1");
                k = k - a[i];
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}