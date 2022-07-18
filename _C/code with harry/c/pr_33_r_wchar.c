#include <stdio.h>

int main()
{
    system("cls");

    FILE *ptr1;
    FILE *ptr2;
    // tr1=fopen("z1readfile.txt","w");
    ptr1 = fopen("z1readfile.txt", "r");
    ptr2 = fopen("z1writefile.txt", "w");
    // fprintf(ptr1,"this is test file");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    getch();
    return 0;
}