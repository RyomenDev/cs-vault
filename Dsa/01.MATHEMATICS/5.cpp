
// lCM

#include <bits/stdc++.h>
using namespace std;

int oLCM(int x, int y)
{
    if (y == 0)
        return x;
    return oLCM(y, x % y);
}

int main()
{
    int x, y;
    cin >> x >> y;

    int oans = oLCM(x, y);
    cout << x*y/oans << endl;
    return 0;
}