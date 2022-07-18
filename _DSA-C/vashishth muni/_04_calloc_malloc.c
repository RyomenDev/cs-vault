#include <stdio.h>
#include <stdlib.h> //calloc(),malloc(),free(),realloc();
#include <conio.h>

int main()
{
    system("cls");

    float *p = (float *)malloc(sizeof(float)); // also

    //int *p = (int *)malloc(sizeof(int)); // initally void ,we assign int
    //int *p = (int *)malloc(2*sizeof(int)); // initally void ,we assign int
    //int *p = (int *)malloc(8*sizeof(int)); // initally void ,we assign int
    *p = 6;
    *(p + 1) = 7;
    //printf("%d %d %d\n", *p, *(p + 1),*(p+2)); // *(p+2) ---> store some random value

    printf("%f %f %f\n", *p, *(p + 1),*(p+2)); // *(p+2) ---> store some random value

    for (int i = 0; i < 5; i++)
    {
       //*(p+i)=i+1; same as p[i]=i+1;
       p[i]=i+1;
    }
        for (int i = 0; i < 5; i++)
    {
      //printf("%d ",*(p+i)); 
      printf("%f ",*(p+i)); 
    }

    free(p);
    getch();
    return 0;
}