#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int d1 = input % 10;
    printf("%d   ", d1);
    input = input / 10;
    int d2 = input % 10;
    printf("%d   ", d2);
    input = input / 10;
    int d3 = input % 10;
    printf("%d   ", d3);
    input = input / 10;
    int d4 = input % 10;
    printf("%d   ", d4);
    input = input / 10;
    int d5 = input % 10;
    printf("%d   ", d5);
    input = input / 10;
    int d6 = input % 10;
    printf("%d   ", d6);
    input = input / 10;
    int d7 = input % 10;
    printf("%d   ", d7);
    input = input / 10;

    return 0;
}