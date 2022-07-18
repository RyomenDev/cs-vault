#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int breadth;
};

void initialize_struct_rectangle(struct rectangle *r, int a, int b)
{
    length = a;
    breadth = b;
}

int area(int r){
    
}
int main()
{
    struct rectangle r;
    initialize_struct_rectangle(&r, 10, 5);
    area(r);
    change_length(&r, 20);
    return 0;
}