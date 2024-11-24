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
        int n, k;
        scanf("%d", &n);
        scanf("%d", &k);
        int p[n];
        int rev = 0;
        int sum = 0;
        int lost;
        
        for (int i = 0; i < n; i++)
        {

            scanf("%d", &p[i]);

            if (p[i] > k)
            {
                sum = sum + k;
                rev = rev + p[i];
            }
            else
            {
                sum = sum + p[i];
                rev = rev + p[i];
            }
        }
        lost = (rev - sum);
        printf("%d\n", lost);
    }
    return 0;
}
