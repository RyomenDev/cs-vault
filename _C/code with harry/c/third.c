#include <bits/stdc++.h>
using namespace std;

int main()
{
    short a;
    long b;
    long long c;
    long double d;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct parking
{
    int vno;
    char colour;
    int no_of_tire;
};

int main()
{
    struct parking p1;
    printf("Enter the details\n");
    scanf("%c", &p1.colour);
    printf("Enter the vno: ");
    scanf("%d", &p1.vno);
    printf("number is %d\n ",p1.vno);
    printf("color %c",p1.colour);

    // the variable of user defined datatype is known as instance variable
    // the member variable of user defined datatype is known as 
