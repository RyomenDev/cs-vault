#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int val;
    struct node *next;
};

typedef struct node list;

list *head = NULL;
list *tail = NULL;

int main()
{
}