#include <bits/stdc++.h>
using namespace std;

int totalCount(int &a, int &b, int &c, int &count)
{
    if (a == b)
        return count;
    else if (a > b && (a - b) >= (2 * c))
    {
        a = a - c;
        b = b + c;
    }
    else if ((a - b) < (2 * c))
    {
        count++;
        return count;
    }
    count++;
    totalCount(a, b, c, count);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int count = 0, ans;
        if (a >= b)
            ans = totalCount(a, b, c, count);
        else
            ans = totalCount(b, a, c, count);
        cout << ans << endl;
    }
    return 0;
}
