#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    //char name[20];
    struct node *next;
};

// int main(int argc,char const*argv[])
int main()
{
    system("cls");
    // struct node node1;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = 5;
   // p->name = "berln";
    p->next = NULL;
   // printf("%d %s", p->data, p->name);
    printf("%d ", p->data);

    getch();
    return 0;
}