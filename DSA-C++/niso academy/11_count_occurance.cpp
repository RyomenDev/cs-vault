#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //system("cls");
    // currval is the number we are counting: we will read new values into val
    int currval = 0, val = 0;
    //read first number and ensure that we have data to process
    if (cin >> currval)
    {
        int cnt = 1; // store the count for the current value we are processing
        while (cin >> val)
        { // read the remaing numbers
            if (val == currval)  // if the values are the same
            {
                cnt++;         // add one(1) to cnt;
            }
            else  // otherwise ,print the count for the previous value
            {
                cout << currval << " occurs " << cnt << " times " << endl;
                currval = val;  //remember the new value
                cnt = 1;      // reset the counter
            }// while loop ends here
            // remember to print count for the last value in the life
            cout << currval << " occur " << cnt << " times " << endl;
        }
    }
    getch();
    return 0;
}