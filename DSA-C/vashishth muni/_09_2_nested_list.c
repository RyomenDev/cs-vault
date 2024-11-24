#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    // char name[20];
    struct node *next;
};
// defining a function to create a node
struct node *createnode(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;
    return (ptr);
};

// int main(int argc,char const*argv[])
int main()
{
    system("cls");
    // struct node node1;
    // struct node *p = (struct node *)malloc(sizeof(struct node));
    // p->data = 5;
    // p->name = "berln";
    // p->next = NULL;
    // printf("%d %s", p->data, p->name);
    // printf("%d ", p->data);

    getch();
    return 0;
}