
// hcf

#include <bits/stdc++.h>
using namespace std;

int ohcf(int x, int y)
{
    if (y == 0)
        return x;
    return ohcf(y, x % y);
}

int hcf(int x, int y)
{
    // gcd(a,b)=gcd(a-b,b) if b<a
    if (x == y)
        return x;
    int min_ = min(x, y);
    int max_ = max(x, y);
    return hcf(max_ - min_, min_);
}

int main()
{
    int x, y;
    cin >> x >> y;

    int ans = hcf(x, y);
    cout << ans << endl;

    int oans = ohcf(x, y);
    cout << oans << endl;
    return 0;
}