#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
struct emp{
    int code;
    float salary;
    char name[20];
};
void show(struct emp e){
    printf("the code of employee is %d\n",e.code);
    printf("the salary of employee is %f\n",e.salary);
    printf("the name of employee is %s\n",e.name);
}

int main()
{
struct emp e1;
struct emp*ptr;

ptr=&e1;
//(*ptr).code=101;
// also
ptr->code=101;
ptr->salary=12.34;
strcpy(ptr->name,"berlin");

show(e1);
//printf("%d",e1.code);
return 0;
}