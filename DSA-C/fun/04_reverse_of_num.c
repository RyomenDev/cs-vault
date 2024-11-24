#include <stdio.h>
int main()
{
    // REVERSING A NUMBER AND CHECKING WHETHER THEY ARE EQUAL
    int number, rem, rev = 0;
    int original_number;
    printf("enter the number to be reversed \n");
    scanf("%d", &number);
    original_number = number;
    while (number >= 1)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number = number / 10;
    }
    printf("the reversed number is %d \n", rev);
    printf("the original number inputted was %d\n",original_number);
    if (original_number == rev)
    {
        printf("number inputted and reversed number both are equal");
    }
    else
    {
        printf("number inputted and reversed number both are not equal");
    }

    return 0;
}