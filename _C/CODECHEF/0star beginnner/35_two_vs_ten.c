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
        int x, z = 1, y;
        scanf("%d", &x);
        int i = 0;

        if (x % 5 == 0)
        {
            while (z != 0)
            {
                y = (pow(2, i));
                z = (x * y) % 10;
                if (z == 0)
                {
                    break;
                }
                else

                {
                    i++;
                    continue;
                }
            }

            printf("%d\n", i);
        }
        else
        {
            printf("-1");
        }
    }
    return 0;
}

//   do
//     {
//         i++;
//     } while (z != 0);