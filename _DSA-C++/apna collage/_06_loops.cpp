#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}