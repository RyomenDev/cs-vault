#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");

    int balance = 1000;
    int choice, amount;
    int endbreak = 0;
    printf("\n");
    while (1)
    {
        system("cls");
        printf("1) deposit\n");
        printf("2) withdraw\n");
        printf("3) check balance\n");
        printf("4) exit\n");
        scanf("%d", &choice);
        printf("choice is %d\n", choice);
        switch (choice)
        {
        case 1:

            printf("enter amount to deposit:\n");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("deposit sucessful\n");

            printf("\npress any key to continue:");
            getch();
            break;
        case 2:
            printf("enter amount to withdraw:\n");
            scanf("%d", &amount);
            if (amount <= balance)
            {
                balance = balance - amount;
                printf("withdraw sucessful\n");
            }
            else
            {
                printf("withdraw amount is greater than ur actual account balance.\n");
                printf("withdraw not possible");
            }

            printf("\npress any key to continue:");
            getch();
            break;
        case 3:
            printf("\nyour current balance is %d\n", balance);

            printf("\npress any key to continue:");
            getch();
            break;
        case 4:
            endbreak = 1;
            break;
        default:
            printf("invalid choice");

            printf("\npress any key to continue:");
            getch();
        }
        if (endbreak == 1)
        {
            break;
        }
    }
    printf("\nthanks for using software \n");

    printf("\npress any key to continue:");
    getch();
    return 0;
}