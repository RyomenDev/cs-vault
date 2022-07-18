#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("the date is :%d/%d/%d\n", d.date,d.month,d.year);
}

int main()
{
    date d1={2,11,21};
    date d2={3,6,45};
    display(d1);
    display(d2);

return 0;
}