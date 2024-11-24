#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

typedef struct node list;
list *head = NULL;

void create(int n)
{
    printf("create function\n");
    head = (list *)malloc(sizeof(list));
    printf("enter first element\n");
    scanf("%d", &head->val);
    head->next = NULL;
    list *current = head;
    list *t;
    printf("enter the other elements:\n");
    for (int i = 1; i < n; i++)
    {
        t = (list *)malloc(sizeof(list));
        scanf("%d", &t->val);
        t->next = NULL;
        current->next = t;
        current = t;
    }
    current->next = head;
}

void display()
{
    list *p = head;
    printf("display function:\n");
    // while (p->next!=head)                       //2 1 2 3
    // {
    //     printf("%d ", p->val);
    //     p = p->next;
    // }
    // do                                           //2 1 2 3
    // {
    //     printf("%d ", p->val);
    //     p = p->next;
    // } while (p->next != head);
    do // 2 1 2 3 4
    {
        printf("%d ", p->val);
        p = p->next;
    } while (p != head);
    printf("\n");
}

void insertatbegin()
{
    printf("insertatbegin function:\n");
    list *p = (list *)malloc(sizeof(list));
    list *q = head;
    p->val = 7;
    // t->next = head;
    // head = t;
    while (q->next != head)
    {
        q = q->next;
    }
    // q is at last node
    q->next = p;
    p->next = head; //1 2 3 4 5 7
    head=p;         //7 1 2 3 4 5
}

int main()
{
    create(5);
    display();

    insertatbegin();
    display();

    return 0;
}