#include <stdio.h>
#include <stdlib.h>

struct employ
{
    int val;
    struct employ *next;
};

typedef struct employ em;
em *head;

void createarray()
{
    printf("create function\n");
    head = (em *)malloc(sizeof(em));
    em *p = head;
    em *second = (em *)malloc(sizeof(em));
    em *third = (em *)malloc(sizeof(em));
    em *fourth = (em *)malloc(sizeof(em));

    p->val = 5;
    p->next = second;

    second->val = 2;
    second->next = third;

    third->val = 9;
    third->next = fourth;

    fourth->val = 7;
    fourth->next = NULL;
}

int display()
{
    em *p = head;
    printf("display function:\n");
    while (p)
    {
        printf("%d  ", p->val);
        p = p->next;
    }
    printf("\n");
}

void insertatbegin()
{
    printf("insert at begin function\n");
    em *p = (em *)malloc(sizeof(em));
    p->val = 9;
    p->next = head;
    head = p;
}

void insertatend()
{
    printf("insert at end function\n");
    em *p;
    em *t = (em *)malloc(sizeof(em));
    p = head;
    while (p->next)
    {
        p = p->next;
        // p->next=p;
    }
    printf("%d\n", p->val);
    // 0t=p->next;
    // p->next=p;
    p->next = t;
    t->val = 19;
    t->next = NULL;
}

void insertatrandom(int index, int num)
{
    em *p = head;
    em *t = (em *)malloc(sizeof(em));
    printf("insert at random function");
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    t->val = num;
    t->next = p->next;
    p->next = t;
}

int main()
{
    createarray();
    display();

    insertatbegin();
    display();

    insertatend();
    display();

    insertatrandom(3, 78);
    display();
    return 0;
}
