// FUNCTION WITHOUT ARGUMENT AND WITH RETURN VALUE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int add(); // function declaration

int add()
{ // function defination
    int a, b;
    printf("enter two num:\n");
    scanf("%d %d", &a, &b);
    return a + b;
}

int main() // name,return type
{
    system("cls"); // actual argument

    int sum = add(); // function call
    printf("sum is %d", sum);
    getch();
    return 0;
}