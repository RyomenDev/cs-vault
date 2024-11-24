
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int ans = 0;
    // cout << ans << " " << n << endl;
    if (n == 0)
        return 0;
    ans = sum(n - 1);
    // cout << ans << " " << n << endl;
    return ans + n;
}

int power(int n, int p)
{
    if (p == 0)
        return 1;
    int ans = power(n, p - 1);
    return ans * n;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int n = 5;
    int ans = sum(5);
    cout << ans << endl;

    ans = power(2, 5);
    cout << ans << endl;

    ans = fact(5);
    cout << ans << endl;

    // nth fibonacci number
    ans = fibonacci(5); // 0 1 1 2 3 5
    cout << ans << endl;

    return 0;
}