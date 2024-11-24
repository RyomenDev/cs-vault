#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    int saving;
    while (t--)
    {

        cin >> saving;

        if (saving > 5000)
            cout << "a\n";
        else if (saving > 2000)
            cout << "b\n";
        else
            cout << "none\n";
    }

    return 0;
}