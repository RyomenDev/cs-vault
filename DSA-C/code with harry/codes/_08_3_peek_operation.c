#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

typedef struct stack stk;

int peek(stk *sp, int i)
{
    if (sp->top - i + 1 < 0)
    {
        printf("not a valid position.\n");
        // return -1;
    }
    else
        return sp->arr[sp->top - i + 1];
}

int main()
{
    stk *s;
    s = (stk *)malloc(sizeof(stk));
    printf("enter the size of stack\n");
    scanf("%d", &s->size);
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;

    printf("enter the %d elements\n", s->size-1);
    for (int i = 0; i < s->size - 1; i++)
    {
        scanf("%d", &s->arr[i]);
        s->top++;
    }

    int i;
    printf("enter the position to peek.\n");
    scanf("%d", &i);
    printf("the element is : %d", peek(s, i));

    return 0;
}