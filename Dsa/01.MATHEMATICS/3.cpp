
// trailing zeroes

#include <bits/stdc++.h>
using namespace std;

int TrailZero(int n)
{
    int ans = 0;
    for (int i = 5; i <= n; i = i * 5)
        ans = ans + n / i;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = TrailZero(n);
    cout << ans << endl;
    return 0;
}