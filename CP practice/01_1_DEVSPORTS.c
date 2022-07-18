#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int z, y, a, b, c;
        scanf("%d %d %d %d %d", &z, &y, &a, &b, &c);
        if ((z - y) >= (a + b + c))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
