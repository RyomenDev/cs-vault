#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int choice1();
int genrate1();
int guess1();
void hint();
int restart();
int end1();

int main()
{
    system("cls");
    int gen_num = 0, choice = 0, count = 0;
    int en = 0;

    while (1)
    {
        while (1)
        {
            int re = 0;
            fflush(stdin);
            choice = choice1(choice);

            switch (choice)
            {
            case 1:
                gen_num = genrate1(gen_num);
                choice = guess1(gen_num, choice);
                break;
            // case 2:
            //     hint(gen_num);
            //     break;
            // case 3:
            //     restart(re);
            //     break;
            // case 4:
            //     end1(en);
            //     break;
            // default:
            //     printf("invalid");
            }
            if (re == 1)
                break;
        }
        if (en == 1)
            break;
    }

    getch();
    return 0;
}

int choice1(int choice)
{
    printf("\n1)to start guessing game");
    printf("\n2) to get hint");
    printf("\n3)to restart guessing game");
    printf("\n4)to exit guessing game\n");
    scanf("%d", &choice);
    return choice;
}

int genrate1(int gen_num)
{
    srand(time(0));
    gen_num = rand() % 100;

    printf("\n%d\n", gen_num);
    printf("\nenter the guessed num between 0 to 99 or \n enter H to get hint\n");
    return gen_num;
}

int guess1(int gen_num, int choice)
{
    int count = 0;
    int help = 0;
    char usernum;
    //fflush(stdin);
    do
    {
        scanf("%c", &usernum);
        if (usernum != gen_num)
        {
            printf("\ntry again");
            printf("\nor enter H to get hint\n");
        }
        count++;
        if (usernum == 'H')
        {
            help++;
            break;
        }
    } while (gen_num != usernum);

    if (help == 1)
        choice = 2;
    if (gen_num == usernum)
        printf("you guessed correctly in %d times", count);
    return choice;
}

void hint(int gen_num)
{
    if (gen_num < 10)
        printf("the num is between or equal to 0 to 09");
    else if (gen_num >= 10 && gen_num < 20)
        printf("the num is between or equal to 10 to 19");
    else if (gen_num >= 20 && gen_num < 30)
        printf("the num is between or equal to 20 to 29");
    else if (gen_num >= 30 && gen_num < 40)
        printf("the num is between or equal to 30 to 39");
    else if (gen_num >= 40 && gen_num < 50)
        printf("the num is between or equal to 40 to 49");
    else if (gen_num >= 50 && gen_num < 60)
        printf("the num is between or equal to 50 to 59");
    else if (gen_num >= 60 && gen_num < 70)
        printf("the num is between or equal to 60 to 69");
    else if (gen_num >= 70 && gen_num < 80)
        printf("the num is between or equal to 70 to 79");
    else if (gen_num >= 80 && gen_num < 90)
        printf("the num is between or equal to 80 to 89");
    else if (gen_num >= 90 && gen_num < 100)
        printf("the num is between or equal to 90 to 99");

    // printf("\n4)to exit guessing game\n");
}

int restart(int re)
{
    re++;
    return re;
}

int end1(int en)
{
    en++;
    printf("game over");
    return en;
}