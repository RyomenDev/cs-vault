#include <stdio.h>
#include <stdlib.h>

struct employ
{
    int id1;
    // int id2;
    // char name[20];
    struct employ *next;
};

typedef struct employ e;

e *first = NULL;

void create(int n)
{
    int x, y;
    first = (e *)malloc(1 * sizeof(e));
    printf("enter the first list infos:\n");
    scanf("%d", &x);
    // scanf("%d", &y);
    // getchar();
    // scanf("%s", first->name);
    // gets(first->name);
    first->id1 = x;
    // first->name = c;
    // first->id2 = y;
    first->next = NULL;

    e *curr = first;
    e *t;
    printf("enter the rest of the values:\n");
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        getchar();
        //     scanf("%s", first->name);
        //    // char z[20]=first->name;

        t = (e *)malloc(1 * sizeof(e));
        t->id1 = x;
        // t->id2 = y;
        // gets(t->name);
        // t->name = z;
        t->next = NULL;
        curr->next = t;
        curr = t;
    }
    t->next = first;
}

void print()
{
    e *p = first;
    printf("the values are:\n");
    while (p != NULL)
    {
        printf("%d ", p->id1);
        // printf("%d ", p->id2);
        // puts(p->name);
        p = p->next;
        printf("\n");
    }
    printf("\n");
}
int main()
{
    // system("cls");
    int n;
    printf("enter the list nuber:\n");
    scanf("%d", &n);
    create(n);
    print();
    // getch();
    return 0;
}