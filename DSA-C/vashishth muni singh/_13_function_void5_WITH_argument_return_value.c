// FUNCTION WITH ARGUMENT AND WITH RETURN VALUE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int add(); // function declaration

int add(int a, int b)
{ // function defination
    return a + b;
}

int main() // name,return type
{
    system("cls"); // actual argument
    int a, b;
    printf("enter two num:\n");
    scanf("%d %d", &a, &b);

    int sum = add(a, b); // function call
    printf("sum of %d and %d is %d", a, b, sum);

    getch();
    return 0;
}
