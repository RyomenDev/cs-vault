// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <time.h>
// #include <math.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a, b;
//         scanf("%d%d", &a, &b);
//         if (a > b)
//         {
//             printf("%d\n", a);
//         }
//         else
//         {
//             printf("%d\n", b);
//         }
//         printf("%d\n", a + b);
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int t;
    // scanf("%d", &t);
    while (t--)
    {
        int x = 25, z = 1, y;
        // scanf("%d", &x);
        int i = 0;
        // y = (pow(2, i));
        //   z = (x * y) % 10;

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
                continue;
            }
            i++;
        }

        printf("%d\n", i);
    }
    return 0;
}

//   do
//     {
//         i++;
//     } while (z != 0);