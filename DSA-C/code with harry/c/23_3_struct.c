#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
 struct str
{
    int code;
    float salary;
    char name[20];
};

int main()
{
     struct str e={100,3.43,"berlin"};
  

    printf("%d\n", e.code);
    printf("%f\n", e.salary);
    printf("%s\n", e.name);

return 0;
}