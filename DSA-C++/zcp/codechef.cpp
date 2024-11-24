#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int j1, j2, j3;

        // for (int i = 1; i <= x / 2; i++)
        for (int i = x/2; i >0; i--)
        {
            j1 = i;
            j2 = (x - i) / 2;
            j3 = j2;

            if ((j1 % 2 != 0 || j2 % 2 != 0) && ((j1 + j2 + j3) == x))
            {
                cout << j1 << " " << j2 << " " << j3 << endl;
                break;
            }
        }
    }
    return 0;
}
