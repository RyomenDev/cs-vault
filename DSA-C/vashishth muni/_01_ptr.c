#include <stdio.h>
#include <conio.h>

int main()
{
    system("cls");

    int x = 5;
    int *p;
    float *q;

    printf("%d\n", x);               //5
    printf("%d\n", &x);              //6422300
    printf("%u\n", &x);              //6422300
    //prinf("%d\n", *x);   //wrong
    printf("%d\n", *(&x));           //5  ---->*(6422300)
    printf("%u\n", *(&x));           //5  ---->*(6422300)

    // p = &x;
    // q = &x;
    // printf("%d\n", *(&p)); // 6422300
    // printf("%d\n", *(&q)); // 6422300
    // printf("%d\n", &p);    // 6422296
    // printf("%d\n", *&p);   // 6422300
    // printf("%d\n", *p);    // 5                    //*p=x
    // printf("%d\n", p);     // 6422300
    // // not work          printf("%d\n", *q);    // 0   :: should be of same type
    // printf("%d\n", q); // 6422300
    getch();
    return 0;
}