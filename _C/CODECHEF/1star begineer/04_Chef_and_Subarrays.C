#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, count = 0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // for (int i = -1; i < n; i++)
        // {
        //     int sum = 0, product = 1;
        //     {
        //         sum += a[i];
        //         product *= a[i];
        //         if (sum == product)
        //             count++;
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            int sum = 0, product = 1;

            for (int j = i; j < n; j++)
            {
                sum += a[j];
                product *= a[j];
                if (sum == product)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}