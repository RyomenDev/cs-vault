#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char x[10], c;
        int count = 0, c1 = 0, i = 0;
        char *ptr = x;
        scanf("%s", x);
        while (*ptr != '\0')
        {
            count++;
            ptr++;
        }
        for (i = 0; i < count; i++)
        {
            if (*ptr == '<' && *ptr[1] = '>')
            {
                c1++;
            }
        }

        // while (c != '\n')
        // {
        //     fflush(stdin);
        //     scanf("%c", &c);
        //     x[i] = c;
        //     i++;
        //     count++;
        // }
        // printf("%d", count);
    }
    return 0;
}
