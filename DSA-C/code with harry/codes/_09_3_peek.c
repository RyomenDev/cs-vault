#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int val;
    struct stack *next;
};

typedef struct stack s;

s *head = NULL;

void create(int size)
{
    head = (s *)malloc(sizeof(s));
    scanf("%d", &head->val);
    head->next = NULL;
    s *current;
    current = head;
    s *t;
    for (int i = 1; i < size; i++)
    {
        t = (s *)malloc(sizeof(s));
        scanf("%d", &t->val);
        t->next = NULL;
        current->next = t;
        current = t;
    }
}

void peek(int pos)
{
    s *ptr = head;
    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        // ptr->next = ptr; -->  not work
        ptr = ptr->next; // ptr ko wha point kardo jaha ptr next h.
    }
    if (ptr != NULL)
        printf("%d\n", ptr->val);
    else
        printf("out of bound.\n");
}

void stacktop()
{
    printf("%d\n", head->val);
}

void stackbottom()
{
    s *ptr = head;
    while (ptr->next) 
    {
        ptr = ptr->next;
    }
    printf("%d\n", ptr->val);
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

    int pos;
    scanf("%d", &pos);
    peek(pos);

    stacktop();
    stackbottom();

    return 0;
}