#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, i = 0, j = 0, final, final1;
    do
    {
        printf("enter the marks:\n");
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            i++;
        }
        else
        {
            j++;
        }

        printf("the no of students with even marks are %d\n", i);
        printf("the no of students with odd marks are %d\n", j);

    } while (a != 0);

    if (i > j)
    {
        final = i % j;
        printf("the remaidner %d\n", final);
    }
    else
    {
        final1 = j % i;
        printf("the remaidner %d\n", final1);
    }
    return 0;
}
