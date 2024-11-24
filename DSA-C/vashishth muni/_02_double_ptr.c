#include <stdio.h>
#include <conio.h>

int main()
{
    system("cls");
    int x, *p, **q, ***r;
    x = 5;
    p = &x;
    q = &p;
    r = &q;
    printf("%d\n", x);          //5  --->value of x
    printf("%d\n", p);          //6422300 ----->address of x
    printf("%d\n", q);          //6422296 ----->address of p
    printf("%d\n", r);          //6422292 ----->address of q

    printf("\n");

    printf("%u\n", &x);         //6422300 ----->address of x
    printf("%u\n", &p);         //6422296 ----->address of p
    printf("%u\n", &q);         //6422292 ----->address of q
    printf("%u\n", &r);         //6422288 ----->address of r

    printf("\n");

    printf("%d\n", *p);         // 5  --->value of x            *p=x
    printf("%d\n", *q);         //6422300 ----->address of x   *q=p
    printf("%d\n", **q);        //5  --->value of x
    printf("%d\n", *(*q));        //5  --->value of x

    printf("\n");

    printf("%d\n", *(&p));      // 6422300----->address of x
    printf("%d\n", *(&q));      //6422296 ----->address of p
    printf("%d\n", **(&q));     //6422300----->address of x
    



    getch();
    return 0;
}