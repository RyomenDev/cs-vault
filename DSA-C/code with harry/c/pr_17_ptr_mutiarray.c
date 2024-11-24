#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void prttable(int *multable, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%dX%d=%d\n", num, i + 1, multable[i]);
    }
}

int main()
{
    int t;
    printf("no. of times u need table:");
    scanf("%d", &t);
    while (t--)
    {

        int tab;
        printf("enter the value:\n");
        scanf("%d", &tab);

        if (tab != 0)
        {

            int multable[tab][10];
            prttable(multable[0], tab, 10);
        }
    }

    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void prttable(int*multable, int num,int n)
{
    for(int i=0;i<n;i++)
    {
        multable[i]=num*(i+1);
    }

  for(int i=0;i<n;i++)
    {
      printf("%dX%d=%d\n",num,i+1,multable[i]);
    }
}

int main()
{
    int tab;
    printf("enter the number:\n");
    scanf("%d",&tab);
int multable[tab][10];
prttable(multable[0],2,10);
prttable(multable[1],7,10);
prttable(multable[2],9,10);

return 0;
}
*/

// incorrect
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void prttable(int*multable, int num,int n,int level)
{
    for(int i=0;i<n;i++)
    {
        multable[level][i]=num*(i+1);
    }

  for(int i=0;i<n;i++)
    {
      printf("%dX%d=%d\n",num,i+1,multable[level][i]);
    }
}

int main()
{
    int tab;
    printf("enter the number:\n");
    scanf("%d",&tab);
int multable[tab][10];
prttable(multable,2,10,0);
prttable(multable,7,10,1);
prttable(multable,9,10,2);

return 0;
}
*/