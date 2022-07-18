#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
void choice();
int deposit_();
int withdraw_();
void check_balance();
void exit_();

int main()
{
    system("cls");

    int balance;
    printf("\nenter balance:");
    scanf("%d", &balance);
    balance = 100;
    int exit = 0;

    while (1)
    // for (int n = 1; n <= 4; n++)

    {
        system("cls");
        int n;
        // int balance=0;
        choice(n);
        printf("\nenter choice:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            balance = deposit_(balance);
            // printf("balance :%d\n",balance);
            break;
        case 2:
            balance = withdraw_(balance);
            // printf("balance :%d\n",balance);
            break;
        case 3:
            check_balance(balance);
            break;
        case 4:
            exit++;
            exit_();
            break;

        default:
            printf("invalid\n");

            printf("\npress any key to continue:");
            getch();
        }
        if (exit != 0)
        {
            break; // while loop break
        }
    }

    getch();
    return 0;
}

void choice(int n)
{
    printf("1) deposit\n");
    printf("2) withdraw\n");
    printf("3) check balance\n");
    printf("4) exit\n");
}

int deposit_(int balance)
{
    int deposit;
    printf("\nenter amount to deposit:");
    scanf("%d", &deposit);
    // deposit=20;
    balance = balance + deposit;
    printf("\ndeposit sucessful");
    printf("\nyour balance is %d\n", balance);

    printf("\npress any key to continue:");
    getch();

    return balance;
}

int withdraw_(int balance)
{
    int withdraw;
    int a = 5, b = 6;
    printf("\nenter amount to withdraw:");
    scanf("%d", &withdraw);
    // withdraw=10;
    balance = balance - withdraw;
    printf("\nwithdraw sucessful");
    printf("\nyour balance is %d\n", balance);

    printf("\npress any key to continue:");
    getch();

    return balance;
}

void check_balance(int balance)
{
    printf("\nyour balance is %d\n", balance);

    printf("\npress any key to continue:");
    getch();
}

void exit_()
{
    system("cls");
    printf("\nTHANK YOU\n");
}
