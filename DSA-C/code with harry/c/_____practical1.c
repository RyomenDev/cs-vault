// ANSWER 1
#include <stdio.h>

int main()
{
    int i;
    const int SIZE = 5;
    //(A)
    unsigned int values[5] = {2, 4, 6, 8, 10};

    //(B)
    unsigned int *vptr;

    //(C)
    for (i = 0; i < SIZE; i++)
        printf("%d ", values[i]);

    //(D)
    vptr = values;
    vptr = &values[0];

//(E)
/*
    The memory address is :->1002502 and The value stored is :->4
    */
    printf("THE MEMORY ADDRESS IS %d\n",1002502);
    printf("THE VALUE STORED IS %d\n",vptr[1]);
                                                              return 0;
}
