#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int val;
    struct stack *next;
};

typedef struct stack s;

s *head = NULL;
s *top = NULL;
void create(int size)
{
    printf("create\n");
    head = (s *)malloc(sizeof(s));
    scanf("%d", &head->val);
    head->next = NULL;
    top = head;
    s *t;
    for (int i = 1; i < size; i++)
    {
        t = (s *)malloc(sizeof(s));
        scanf("%d", &t->val);
        t->next = NULL;
        top->next = t;
        top = t;
    }
}

int isempty()
{
    printf("isempty");
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isfull()
{
    printf("isfull\n");
    s *n = (s *)malloc(sizeof(s));
    if (n == NULL)
        return 1;
    else
        return 0;
}

void push()
{
    printf("push:\n");
    s *n = (s *)malloc(sizeof(s));
    // if (n == NULL)
    if (isfull())
        printf("stack overflow\n");
    else
    {
        scanf("%d", &n->val);
        n->next = head;
        head = n;
    }
}

int pop()
{
    printf("pop::\n");
    if (isempty())
        printf("stack underflow\n");
    else
    {
        s *n = head;
        head = head->next;
        int x = n->val;
        free(n);
        return x;
    }
}

void display()
{
    printf("display\n");
    s *t;
    t = head;
    while (t)
    {
        printf("%d ", t->val);
        t = t->next;
    }
    printf("\n");
}

int main()
{
    int size;
    scanf("%d", &size);

    create(size);
    display();

    push();
    display();

    int x=pop();
    printf("poped element is %d\n",x);
    display();

    return 0;
}