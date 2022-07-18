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
        // int n,i,ith,si,ji;;
        int n, s, j;
        int count = 0;
        scanf("%d", &n);
        while (n--)
        {
            // scanf("%d %d",&i,&ith);
            // scanf("%d %d",&si,&ji);
            scanf("%d %d", &s, &j);
            if (j - s > 5)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}