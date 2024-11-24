#include <stdio.h>
#include <conio.h>
int fun(int x, int y)
{
    int rev;
    rev = x;
    x = y;
    y = rev;
    printf("the reverse1 value of x & y are %d & %d\n", x, y);
    return (x, y);
}

int swap(int *p, int *q)
{
    int swap;
    swap = *p;
    *p = *q;
    *q = swap;
    //     swap = p;  not work
    // p = q;
    // q = swap;
    printf("the swaped1 value of x & y are %d & %d\n", *p, *q);
    // return (p, q);
   // return (&p, &q);
    return (p);
}

int main()
{
    //system("cls");
    int x=5, y=6;
    // scanf("%d", &x);
    // scanf("%d", &y);
    printf("the original value of x & y are %d & %d\n", x, y);

    fun(x, y);
    printf("the reverse2 value of x & y are %d & %d\n", fun(x, y));

    int *p, *q;
    p = &x;
    q = &y;
    swap(p, q);
    // swap(&p, &q);
    //printf("the swaped2 value of x & y are %d & %d\n", swap(p, q));
    //printf("the swaped2 value of x is %d\n", swap(p, q));
    printf("the swaped2 value of x is %d\n", x);

    getch();
    return 0;
}