#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    printf("%d\n", printf("%s\n", "Hello world!")); // count char ---> 13

    char c = 255;
    c = c + 10;
    printf("%d\n", c); //9

    unsigned i=1;
    int j=-4;
    printf("%u\n",i+j);  //4294967293  (-3)-->1s compliment then 2s compliment

    getch();
    return 0;
}