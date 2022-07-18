#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
{
    int roll_no;
    char name[50];
    int id;
};

int main()
{
    system("cls");
    /*
    // struct student s1, *p;
    // p = &s1;
     struct student *p;
    // scanf("%d %s %d", &(s1.roll_no), s1.name, &(s1.id));
    // printf("%d %s %d\n", s1.roll_no, s1.name, s1.id);
    scanf("%d %s %d", &(p->roll_no), p->name, &(p->id));
    printf("%d %s %d\n", p->roll_no, p->name, p->id);
    */
    struct student *p;
    p = (struct student *)malloc(sizeof(struct student));
    scanf("%d %s %d", &(p->roll_no), p->name, &(p->id));
    printf("%d %s %d\n", p->roll_no, p->name, p->id);

    free(p);
    //printf("%d %s %d\n", p->roll_no, p->name, p->id);  print garbage value
    getch();
    return 0;
}