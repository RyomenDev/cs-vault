#include<stdio.h>
#include<stdlib.h>

struct queue
{
int front;
int end;
int *array;
};

typedef struct queue qe;

void enqueue(qe**q;int n)
{
    q->array=(int*)malloc(n*sizeof(int));
    q->array=generatevalue(n);
    q->front=0;
    q->end=n-1;
}

int *gereratevalue(int n){
    int *arr=(int*)malloc(n*sizeof(int));
    int i;
    for (int i = 0; i < n; i++)
    {
        int x = rand();
        while (!check(x,arr,n))
        {
            x=rand();
        }
        arr[i];
    }
    return arr;
}

int check(int x,int *arr , int n){
    for (int i = 0; i < n; i++)
    {
        if(x==arr[i])
        return 0;
    }
    return 1;
}

void dequeue(qe* q){
    int val=q->front;
    q->front++;
}

void display(qe*q,int n)
{
    for (int i = q->front; i <= q->end; i++)
    {
        printf("%d",q->array[i]);
    }
    printf("\n");
}

int main()
{
    queue* q=(queue*)malloc(sizeof(queue));
    int n;
    printf("enter the size or -1 to exit.\n");
    scanf("%d",&n);
    if(n==1)
    break;
    enqueue(q,n);

    display(q,n);
    dequeue(q);

return 0;
}