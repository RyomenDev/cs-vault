
// number of digits

#include <bits/stdc++.h>
using namespace std;

int modulo1(int n)
{
    int ans = 0;
    ans = log10(n) + 1;
    return ans;
}
int modulo2(int n)
{
    if (n == 0)
        return 0;
    return 1 + modulo2(n / 10);
}

int main()
{

    int n;
    cin >> n;

    int ans1 = modulo1(n);
    cout << ans1 << endl;

    int ans2 = modulo2(n);
    cout << ans2 << endl;

    return 0;
}