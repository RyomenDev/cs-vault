#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    printf("%d\n", sizeof(int));   //4
    printf("%d\n", sizeof(float)); //4
    printf("%d\n", sizeof(double));//8
    printf("%d\n", sizeof(char));  //1
    getch();
    return 0;
}
