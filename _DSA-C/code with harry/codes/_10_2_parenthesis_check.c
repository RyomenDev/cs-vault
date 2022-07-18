
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr; // dma of array to hold stack
};

typedef struct stack st;

int isempty(st *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isfull(st *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

// pushing
void push(st *s, char x)
{
    if (isfull(s))
        printf("stack is full.\n stack overflow.\n");
    else
    {
        // int val;
        // scanf("%d", &val);
        s->top++;
        s->arr[s->top] = x;
    }
}

int pop(st *s)
{
    if (isempty(s))
    {
        printf("stack is empty.\n improper parenthesis.\n");
        return -1;
    }
    else
    {
        char x;
        x = s->arr[s->top];
        // s->arr[s->top] = NULL;
        s->top = s->top - 1;
        // return val;
    }
}

int parenthesismatch(char *exp, int length)
{
    st *s;
    s->size = length;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    // for (int i = 0; i < s->size; i++)
    {
        if (exp[i] == '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isempty(s))
                return 0;
            else
                pop(s);
        }
    }
    if (isempty(s))
        return 1;
    else
        return 0;
}

int main()
{
    char *exp = "(8*(9)";
    int length;
    // scanf("%d", &length);
    length = 100;

    if (parenthesismatch(exp, length))
        printf("proper parenthesis .\n");
    else
        printf("improper parenthesis .\n");

    return 0;
}
/*
implementing stack using arrays
1. fixed size array creation
2. top element
3. structure for stack
*/