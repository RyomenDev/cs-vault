#include <bits/stdc++.h>
// #include <algorithm>

using namespace std;

int numofPieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(numofPieces(n - a, a, b, c),
                  max(numofPieces(n - b, a, b, c),
                      numofPieces(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    int n, a, b, c;
    n = 23, a = 12, b = 9, c = 11;
    int ans = numofPieces(n, a, b, c);
    cout << ans << endl;
    return 0;
}
// 9 2 2 2