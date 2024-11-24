#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

typedef struct stack stk;

void input(stk *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s->arr[i]);
        s->top++;
    }
}

int stacktop(stk *s)
{
    return s->arr[s->top];
}

int stackbottom(stk *s)
{
    return s->arr[0];
}

int main()
{

    stk *s = (stk *)malloc(sizeof(stk));
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    input(s, s->size);

    printf("the top most element is %d \n", stacktop(s));

    printf("the lower most element is %d", stackbottom(s));

    return 0;
}