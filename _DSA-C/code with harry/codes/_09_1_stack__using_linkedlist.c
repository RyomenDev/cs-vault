#include <stdio.h>
#include <stdlib.h> //top=null --empty  full --> heap memory exhausted.

struct stack
{
    // int top;
    int val;
    // int size;
    struct stack *next;
};

typedef struct stack st;

st *first = NULL;

void create(int size)
{
    printf("create \n");
    first = (st *)malloc(1 * sizeof(st));

    scanf("%d", &first->val);
    first->next = NULL;

    st *current = first;
    st *top;

    for (int i = 1; i < size; i++)
    {
        top = (st *)malloc(1 * sizeof(st));
        scanf("%d", &top->val);
        top->next = NULL;

        current->next = top;
        current = top;
    }
}

// void print(st *s, int size)
void print()
{
    printf("display\n  ");
    st *p;
    p = first;
    while (p)
    {
        printf("%d  ", p->val);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int size;
    scanf("%d", &size);

    create(size);
    print();

    return 0;
}