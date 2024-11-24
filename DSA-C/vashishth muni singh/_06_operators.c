#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

// opertores works from left to right;

int main()
{
    system("cls");
    int x = 5, y = 7, z = 9, result;
    // result=x>y;              //5>7---> false(0)
    // result=x>y<z;            //5>7--->(0)         0<9---(1)
    // result=x>y>z;            //5>7--->(0)         0>9---(0)
    // result=x<y>z;            //5<7--->(1)         1>9---(0)
    // result=x<y<z;            //5<7--->(1)         1<9---(1)
    // result=x>y && y>z;       //5>7--->false(0)
    // result=x<y && y>z;       //5<7--->true(1)     7>9--->false(0)  >> (0)
    // result=x<y && y<z;       //5<7--->true(1)     7<9--->true(1)  >> (1)
    result = x && y++; //       x(non -ve)-->(1)    y(non -ve ,add after)
    printf("%d\n", result);
    printf("%d\n", x);
    printf("%d\n", y);

    printf("***************************************\n");

    x = 0, y = 1;
    // result = x && y++;        //(0,0,1)
    // result = x++ && y++;      //(0,0,1)
    result = ++x && y++; //(1,1,2)
    printf("%d\n", result);
    printf("%d\n", x);
    printf("%d\n", y);

    printf("***************************************\n");

    x = 0, y = 1;
    // result = x || y++;          //(1,0,2)
    // result = x++ || y++;          //(1,1,2)
    result = ++x || y++; //(1,1,1)
    printf("%d\n", result);
    printf("%d\n", x);
    printf("%d\n", y);

    printf("***************************************\n");

    x = 0, y = 1;
    result = !x; //(1,0,1)     opposite
    printf("%d\n", result);
    printf("%d\n", x);
    printf("%d\n", y);

    printf("***************************************\n");

    // condition?x:y;
    x = 0, y = 1;
    // result = x>y?x:y;      //(y=1)
    //result = x < y ? x : y; //(x=0)
    //result = x < y ? x : y++; //(x=0,0,1)
    result = x > y ? x : y++; //(Y=1,0,2)
    printf("%d\n", result);
    printf("%d\n", x);
    printf("%d\n", y);

    getch();
    return 0;
}