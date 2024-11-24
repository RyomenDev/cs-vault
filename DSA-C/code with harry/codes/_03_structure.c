#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a, int tsize, int usize)
{
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *)malloc(tsize * sizeof(int));
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void showarray(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setvalue(struct myarray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter %d elements:\n", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    system("cls");

    struct myarray marks;
    createarray(&marks, 10, 3);
    printf("running setvalue \n");
    setvalue(&marks);
    printf("running show \n");
    showarray(&marks);

    getch();
    return 0;
}