#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct address
{
    int pincode;       // s1.add.pincode
    char street[30];   // s1.add.street
    char district[20]; // s1.add.district
};
struct student
{
    int roll_no;   // s1.rollno
    char name[50]; // s1.name
    struct address add;
   // struct address *q = (struct address *)malloc(sizeof(address)); // some error
};

int main()
{
    system("cls");
    /*
    struct student s1, *p;
    p = &s1;
    // struct student *p;
    scanf("%d %s %d %s %s", &(s1.roll_no), s1.name, &(s1.add.pincode), s1.add.street, s1.add.district);
    printf("%d %s %d %s %s\n", s1.roll_no, s1.name, &(s1.add.pincode), s1.add.street, s1.add.district);
    scanf("%d %s %d %s %s", &(p->roll_no), p->name, &(p->add.pincode), p->add.street, p->add.district);
    printf("%d %s %d %s %s\n", p->roll_no, p->name, &(p->add.pincode), p->add.street, p->add.district);
    */
    struct student *p;
    // p = (struct student *)malloc(sizeof(struct student));
    p = malloc(sizeof(struct student));

    scanf("%d %s %d %s %s", &(p->roll_no), p->name, &(p->add.pincode), p->add.street, p->add.district);
    printf("%d %s %d %s %s\n", p->roll_no, p->name, &(p->add.pincode), p->add.street, p->add.district);
    getch();
    return 0;
}