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
        int D, d, a, b, c;
        scanf("%d %d %d %d %d", &D, &d, &a, &b, &c);
        int z = D * d;
        if (z >= 10 && z < 21)
        {
            printf("%d\n",a);
        }
        else if (z >= 21 && z < 42)
        {
            printf("%d\n",b);
        }
        else if (z >= 42)
        {
            printf("%d\n",c);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}