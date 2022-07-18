#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    char var = 65;
    printf("%c\n", var); // A
    float var1 = 3.1414926535897932;
    double var2 = 3.1414926535897932;
    long double var3 = 3.141492653589793213456;

        int var1a = 4 / 9;
    printf("%d\n", var1a);      //0
    float var1b = 4 / 9;    
    printf("%f\n", var1b);   //0.000000
    printf("%.2f\n", var1b);   //0.00
    int var1c = 4.0 / 9.0;   
    printf("%f\n", var1c);   //0.000000
    float var1d = 4.0 / 9.0;   
    printf("%.2f\n", var1d);   //0.44

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%f\n", var1);     // 3.141493
    printf("%.16f\n", var1);  // 3.1414926052093506
    printf("%f\n", var2);     // 3.141493
    printf("%.16f\n", var2);  // 3.1414926535897933
    printf("%Lf\n", var3);    // something wrong
    printf("%.21Lf\n", var3); // something wrong
    getch();


    
    return 0;
}