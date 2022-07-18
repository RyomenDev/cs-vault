// operations - push ; pop ;

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

typedef struct stack stk;

// checking - is stack is full
int isfull(stk *ptr)
{
    if (ptr->top == ptr->size - 1)
        printf("the stack is full.\n");
    else
        printf("the stack is not full.\n");
}

// pushing
void push(stk *s)
{
    if (isfull(s))
        printf("stack is full.\n stack overflow.\n");
    else
    {
        // int val;
        // scanf("%d", &val);
        s->top++;
        s->arr[s->top] = 7;
    }
}

// checking - is stack is empty
int isempty(stk *ptr)
{
    if (ptr->top == -1)
        printf("the stack is empty.\n");
    else
        printf("the stack is not empty.\n");
}

// poping
int pop(stk *s)
{
    if (isempty(s))
        printf("stack is empty.\n stack underflow.\n");
    else
    {
        int val;
        val = s->arr[s->top];
        // s->arr[s->top] = NULL;
        s->top = s->top - 1;
        return val;
    }
}
int main()
{

    struct stack *s;
    // stk *s = (stk *)malloc(sizeof(stk));
    s->size = 8;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // for (int i = 0; i < s->size; i++)   --> do not work without memory allocation to stack.
    // {
    //     printf("* ");
    // }

    s->arr[0] = 7;
    s->top++; // 0
    // s->arr[1] = 7;
    // s->top++;                //1
    // s->arr[2] = 7;
    // s->top++;                //2
    // s->arr[3] = 7;
    // s->top++;                //3
    // s->arr[4] = 7;
    // s->top++;                //4

    printf("stack created.\n");

    // pushing
    push(s);

    // poping
    pop(s);

    (isempty(s));
    (isfull(s));

    return 0;
}