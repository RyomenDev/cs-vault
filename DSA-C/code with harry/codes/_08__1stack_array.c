// stack -- linear data structure -- collection of elements --follows LIFO (last in first out) -- implemented using array
//  uses - 1. function calls ; infix to postfix conversion ; parenthesis matching & more

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; // dma of array to hold stack
};

typedef struct stack st;

int isempty(st *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isfull(st *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

int main()
{
    // st s;
    // s.size=20;
    // s.top=-1; // -1 denotes stack is empty
    // s.arr=(int*)malloc(20*sizeof(int));

    //  -> defrencing then . operator

    st *s; // stack pointer can be passed to functions and call by refrence use easily
    s = (st *)malloc(sizeof(st));
    s->size = 5;
    s->top = -1; // -1 denotes stack is empty
    s->arr = (int *)malloc(s->size * sizeof(int));

    // pusing elements
    for (int i = 0; i < s->size - 1; i++) //---> not working
    {
        printf("lol ");
        s->arr[i] = i + 1;
        s->top++;
    }

    // s->arr[0] = 7;
    // s->top++;           // 0
    // s->arr[1] = 7;
    // s->top++;           // 1
    // s->arr[2] = 7;
    // s->top++;           // 2
    // s->arr[3] = 7;
    // s->top++;           // 3
    // s->arr[4] = 7;
    // s->top++;           // 4

    // check if stack is empty
    if (isempty(s))
        printf("the stack is empty.\n");
    else
        printf("the stack is not empty.\n");

    // check if stack is full
    if (isfull(s))
        printf("the stack is full.\n");
    else
        printf("the stack is not full.\n");

    return 0;
}
/*
implementing stack using arrays
1. fixed size array creation
2. top element
3. structure for stack
*/