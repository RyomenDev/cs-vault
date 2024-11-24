#include <stdio.h>


int main()
{
    system("cls");
    FILE *ptr;
    int num;
     ptr = fopen("ztable.txt", "w");
    while (1)
    {
        printf("enter the integer you need the table of \n");
        printf("enter 0 to exit");
        scanf("%d", &num);
        for (int i = 0; i < 10; i++)
        {
            fprintf(ptr, "%dx%d=%d\n", num, i + 1, num * (i + 1));
        }
        fprintf(ptr,"\n");
        if(num==0)
        break;
    }
    fclose(ptr);
    getch();
    return 0;
}