#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double 
#define endl "\n"
#define For(a, b, c) for (auto(a) = (b); (a) < (c); ++(a))

void Vatsh()
{
    int n;
    cin >> n;
    if (!(n & 1))
    {
        cout << -1 << endl;
        return;
    }
    int i = 1;
    int j = n;
    For(k, 0, n)
    {
        if (k % 2 == 0)
            cout << (i++) << " ";
        else
            cout << (j--) << " ";
    }
    cout << endl;
}

int32_t main()
{
    int tt = 1;
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}
