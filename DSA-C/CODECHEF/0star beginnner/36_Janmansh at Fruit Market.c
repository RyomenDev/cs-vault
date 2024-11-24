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
        int x, a, b, c;
        scanf("%d %d %d %d", &x, &a, &b, &c);
        int z;
        if (a <= b && a <= c)
        {
            if (b < c)
            {
                z = (x - 1) * a + b;
            }
            else
            {
                z = (x - 1) * a + c;
            }
        }
        if (b <= a && b <= c)
        {
            if (a < c)
            {
                z = (x - 1) * b + a;
            }
            else
            {
                z = (x - 1) * b + c;
            }
        }
        if (c <= b && c <= a)
        {
            if (b < a)
            {
                z = (x - 1) * c + b;
            }
            else
            {
                z = (x - 1) * c + a;
            }
        }
        printf("%d\n",z);
    }
    return 0;
}