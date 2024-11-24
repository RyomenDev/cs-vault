#include <bits/stdc++.h>
using namespace std;

void sumofDigits(int n, int &ans)
{
    if (n == 0)
        return;
    int digit = n % 10;
    n=n/10;
    ans += digit;
    sumofDigits(n, ans);
}

int main()
{
    int n = 253;
    int ans = 0;
    sumofDigits(n, ans);
    cout << ans << endl;
    return 0;
}