#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp;

//void show(struct employee e){
void show(emp e){
    printf("the code of employee is %d\n",e.code);
    printf("the salary of employee is %f\n",e.salary);
    printf("the name of employee is %s\n",e.name);
}

int main()
{
    //declaring ptr and e1
// struct employee e1;
// struct employee*ptr;
     //or
emp e1;
emp *ptr;

//pointinh ptr to e1
ptr=&e1;

//(*ptr).code=101;  // also
ptr->code=101;
ptr->salary=12.34;
strcpy(ptr->name,"berlin");

show(e1);
//printf("%d",e1.code);
return 0;
}