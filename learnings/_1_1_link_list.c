#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};

typedef struct node list;

list *first = NULL;

void create(int n)
{
    int x;
    first = (list *)malloc(1 * sizeof(list));
    printf("enter the 1st value\n");
    scanf("%d", &x);
    first->val = x;
    first->next = NULL;

    list *current = first;
    list *t;
    printf("enter the rest of the value\n");

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        t = (list *)malloc(1 * sizeof(list));
        t->val = x;
        t->next = NULL;
        current->next = t;
        current = t;
    }
}

void insertatbegin(int x)
{
    list *t;
    t = (list *)malloc(1 * sizeof(list));
    t->val = x;
    t->next = first;
    first = t;
}

void insertatrandom(int x, int pos)
{
    if (pos == 0)
    {
        insertatbegin(x);
    }
    else
    {
        list *t = (list *)malloc(1 * sizeof(list));
        list *p = first;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t->val = x;
        t->next = p->next;
        p->next = t;
    }
}

int del(int pos, int count)
{
    if (pos == 0)
    {
        delatbeg();
    }
    else if (pos == count)
    {
        delatend();
    }
    else
    {
        delatpos(pos);
    }
}

void delatbeg()
{
    list *current;
    current = first;
    first = first->next;
    free(current);
}

void delatend()
{
    list *current, *current1;
    current = first;
    while (current->next)
    {
        current1 = current;
        current = current->next;
    }
    current1->next = NULL;
    free(current);
}

int delatpos(int pos)
{
    int i;
    list *current, *current1;
    current = first;
    while (i < pos - 1)
    {
        current1 = current;
        current = current->next;
        i++;
    }
    current1->next = current->next;
    free(current);
}

void reverse()
{
    list *prev = NULL;
    list *current = first;
    list *next = NULL;
    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    first = prev;
}

int count()
{
    int count = 0;
    list *t = (list *)malloc(1 * sizeof(list));
    list *p = first;
    while (p)
    {
        count++;
    }
    return count;
}

void print()
{
    list *p = first;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("enter the number of list:\n");
    scanf("%d", &n);
    create(n);
    count();
    print();
    // printf("enter the new element for first position\n");
    // int x;
    // scanf("%d", &x);
    // insertatbegin(x);
    // print();

    printf("enter the position to enter new element\n");
    int pos;
    scanf("%d", &pos);
    printf("enter the element to insert\n");
    int z;
    scanf("%d", &z);
    insertatrandom(z, pos);
    count();
    print();

    printf("enter the no. of elements to del:\n");
    int t;
    scanf("%d", &t);
    while (t--)
    {
        printf("enter position of element to del:\n");
        int pos1;
        scanf("%d", &pos1);
        // int z = count();
        del(pos1, count());
        print();
    }

    reverse();
    print();

    return 0;
}
