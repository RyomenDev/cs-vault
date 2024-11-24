#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    // int c;
    // for (c = 1; c <= 10; c++) // condition is cheked during entry time
    // {
    //     // if (c == 7)
    //     //     break;                        //stop after 6

    //     //    if (c == 7)
    //     //        continue;                  //skip 7

    //     cout << c << endl;

    //     // if (c == 7)
    //     //     break;                        //stop after 7

    //     //  if (c == 7)
    //     //    continue;                      //skip nothing
    // }

    // int c1 = 1;
    // while (c1 <= 10) // condition is cheked during entry time
    // {
    //     //     if (c1 == 3)
    //     //     {
    //     //         c1++;
    //     //         continue;           // skip 13
    //     //     }

    //     cout << c1 + 10 << endl;
    //     // if (c1 == 3)
    //     //     break;   //stop after 13

    //     //  if (c1 == 3)
    //     //    continue;   //endless loop since ++ not working

    //     // if (c1 == 3)
    //     // {
    //     //     c1++;
    //     //     continue; // skip nothing
    //     // }

    //     c1++;
    //     //   if (c1 == 3)
    //     //     break;   //stop after 12

    //     // if (c1 == 3)
    //     //     continue; // skip nothing
    // }

    int c2 = 1;
    do
    {
        //   if (c2 == 5)
        //    continue;   //endless loop after 24 since ++ not working

         if (c2 == 5)
        {
            c2++;
            continue; // 25
        }

        cout << c2 + 20 << endl;
        // if(c2==5)
        // break;   //break after 25

        //  if (c2 == 5)
        //    continue;   //endless loop after 25 since ++ not working

        // if (c2 == 5)
        // {
        //     c2++;
        //     continue; // skip nothing
        // }

        c2++;
    } while (c2 <= 10); // condition is cheked during exit time

    getch();
    return 0;
}