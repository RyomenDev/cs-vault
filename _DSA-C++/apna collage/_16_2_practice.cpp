
// conversions: number system

#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexatodecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] > '0' && n[i] <= '9')
            ans += x * (n[i] - '0');
        else if (n[i] >= 'A' && n[i] <= 'F')
            ans += x * (n[i] - 'A' + 10);
        x *= 16;
    }

    return ans;
}

int decimaltobinary(int n)
{
    int ans = 0;
    int x = 1;
    while (x<=n)
    {
        x *= 2;
        int y = n % 2;
        ans += x * y;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n1, n2, n4;
    string n3;
    // cin >> n1;
    // cout << "decimal of binary " << n << " is " << binarytodecimal(n1) << endl;

    // cin >> n2;
    // cout << "decimal of octal " << n2 << " is " << octaltodecimal(n2) << endl;

    // cin >> n3;
    // cout << "decimal of hexa " << n3 << " is " << hexatodecimal(n3) << endl;

    cin >> n4;
    cout << "decimal of hexa " << n4 << " is " << decimaltobinary(n4) << endl;

    return 0;
}
