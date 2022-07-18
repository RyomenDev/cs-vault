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
        int t1, t2, r1, r2;
        scanf("%d %d %d %d", &t1, &t2, &r1, &r2);
        if (pow(t1, 2) / pow(r1, 3) == pow(t2, 2) / pow(r2, 3))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}