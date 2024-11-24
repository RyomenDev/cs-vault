#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int length;
    int top;
    char *arr;
};

typedef struct stack st;

void create_stack(st *s, int size)
{
    s->length = size;
    s->top = -1; // -1 denotes stack is empty
    s->arr = (char *)malloc(s->length * sizeof(char));
}

void create(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%c", &arr[i]);
    }
}

void push(st *s, char x)
{
    // printf("push\n");
    s->arr[s->top] = x;
    s->top++;
}

int pop(st *s)
{
    // printf("pop\n");
    if (s->top < 0)
    {

        return 1;
    }
    else
    {
        int y = s->arr[s->top];
    }
    s->top--;
}

void check(st *s, char ar[], int size)
{
    // printf("check\n");
    //   for (int i = 0; exp[i] != '\0'; i++)
    for (int i = 0; i < size; i++)
    {
        char x;
        if (ar[i] == '(')
        {
            x = ar[i];
            push(s, x);
            // printf("push: %c\n", ar[i]);
        }
        if (ar[i] == ')')
        {
            x = ar[i];
            // printf("pop: %c\n", ar[i]);
            if (s->top == -1)
            {
                printf("break\n");
                printf("wrong order\n");
                goto label;
            }
            else
                pop(s);
        }
        // printf("%d  %c\n ", s->top, ar[i]);
    }

    // printf("%d\n", s->top);
    if (s->top == -1)
        printf("right order\n");
    else
        printf("wrong order.\n");

label:
    printf("completed process\n");
}

int main()
{
    int size;
    scanf("%d", &size);

    char ar[size];

    create(ar, size);

    st *s;
    s = (st *)malloc(sizeof(st));
    s->top = 5;

    create_stack(s, size);

    check(s, ar, size);

    return 0;
}