

// palindrome

#include <bits/stdc++.h>
using namespace std;

int rev=0;

int palindrome(int n)
{
    if (n == 0)
        return rev;
    int num = n % 10;
    rev = rev * 10 + num;
    // cout << num << " " << rev << endl;
    palindrome(n / 10);
}

int main()
{
    int n;
    cin >> n;

    int res = palindrome(n);
    // cout << res << endl;
    if (res == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}