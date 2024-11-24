#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        int z = 0;
        int day = 0, sin = 0;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            day++;
            z = z + a[i];
            if (z >= k)
            {
                z = z - k;
            }
            else
            {
                printf("NO %d", day);
                sin++;
            }
        }
        if (sin == 0)
            printf("YES");
    }
    return 0;
}