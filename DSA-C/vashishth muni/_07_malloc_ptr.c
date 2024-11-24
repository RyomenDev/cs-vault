#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // system("cls");
    int **p;
    // p = (int **)malloc(3 * sizeof(3 * int *)); wrong
    //  p = (int **)malloc(3 * sizeof(int *));

    p = (int **)malloc(sizeof(int *));

    // p = (int *)malloc(sizeof(int *)); // warning: assignment from incompatible pointer type
    // expected 'void *' but argument is of type 'int'-->run sucessfully

    // p = (int)malloc(sizeof(int *)); //  warning: assignment makes pointer from integer without a cast

    // p = (int )malloc(sizeof(int ));  //warning: assignment makes pointer from integer without a cast

    for (int i = 0; i < 3; i++)

    {     
        p[i] = (int *)malloc(4 * sizeof(int)); // p[i]==*(p+i)
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &p[i][j]); // &p[i][j]==*(p+i)+j
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", p[i][j]); // &p[i][j]==*(*(p+i)+j)
        }
    }
    free(p);
    free(*p);
    // free(**p);
    getch();
    return 0;
}