// FILE*ptr;
// ptr=fopen("filenmae.ext","mode");

// if the file does   not exist,fopen returns NULL

// fgetc(ptr)--->use to read a character from file
// fputc('c',ptr)--> use tp write a charecter on file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    FILE *ptr;
    int num1, num2;
    ptr = fopen("testcase.txt", "r"); // read mode
    if (ptr == NULL)
    {
        printf("the file does not exist.");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("%d\n", num1);
        printf("%d\n", num2);
    }

    // fclose(ptr);
    //  ptr = fopen("testcase.txt", "w"); // write mode
    //  "rb" ----> open for reading in binary
    //  "rb" ----> open for writing in binary
    //  "a" ----> open for append

    getch();
    return 0;
}