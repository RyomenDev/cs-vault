#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct facebook
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct facebook e[2];
    e[0].code = 34;
    e[0].salary = 3.78;
    strcpy(e[0].name,"berlin");

    printf("%d\n", e[0].code);
    printf("%f\n", e[0].salary);
    printf("%s\n", e[0].name);

e[1].code = 54;
    e[1].salary = 43.78;
    strcpy(e[1].name,"aberlin");

    printf("%d\n", e[1].code);
    printf("%f\n", e[1].salary);
    printf("%s\n", e[1].name);

    e[2].code = 64;
    e[2].salary = 466.78;
    strcpy(e[2].name,"gaberlin");

    printf("%d\n", e[2].code);
    printf("%f\n", e[2].salary);
    printf("%s\n", e[2].name);




    return 0;
}