#include <bits/stdc++.h>
using namespace std;

bool gcd(int a, int b)
{
    int hcf;
    for (int i = 1; i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    if (hcf == 1)
        return false;
    return true;
}

void finalAns(int &a, int &b, int l, int r)
{
    cout << a << " " << b << " " << l << " " << r << endl;

    if ((a == b && (a + b) > r) || b < 1)
    {
        cout << -1 << endl;
        return;
    }
    if ((a + b) >= l && (a + b) <= r)
    {
        if (gcd(a, b))
        {
            cout << a << " " << b << endl;
            return;
        }
    }
    a++;
    if ((a + b) > r)
    {
        a = 1;
        b--;
    }
    finalAns(a, b, l, r);
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    {
        int l, r;
        cin >> l >> r;

        int a = 1, b = r;
        finalAns(a, b, l, r);
    }
    return 0;
}
