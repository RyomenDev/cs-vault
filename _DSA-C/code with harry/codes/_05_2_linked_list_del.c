#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

typedef struct node list;
list *head;

void create(int n)
{
    // int x;
    head = (list *)malloc(1 * sizeof(list));
    printf("create function\nenter the first entry\n");
    scanf("%d", &head->val);
    // scanf("%d", &x);
    // head->val = x;
    head->next = NULL;

    list *current = head;
    list *t;
    printf("enter the other entries\n");
    for (int i = 1; i < n; i++)
    {
        t = (list *)malloc(1 * sizeof(list));
        scanf("%d", &t->val);
        // scanf("%d", &x);
        // t->val = x;
        t->next = NULL;
        current->next = t;
        current = t;
    }
}

void display()
{
    list *p = head;
    printf("display function:\n");
    while (p)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
}

void delatbegin()
{
    printf("del at begin\n");
    list *p = head;
    head = head->next;
    free(p);
}

void delatend()
{
    printf("del atend\n");
    list *p = head;
    list *q;
    while (p->next)
    {
        q = p;
        p = p->next;
    }
    printf("%d\n", p->val);
    q->next = NULL;
    free(p);
}

void delatpos(int n)
{
    printf("del at position\n");
    list *p = head, *q;
    for (int i = 0; i < n - 1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    free(p);
}
int main()
{
    int x;
    printf(":enter the num of list:\n");
    scanf("%d", &x);
    create(x);
    display();

    delatbegin();
    display();

    delatend();
    display();

    delatpos(3);
    display();

    return 0;
}