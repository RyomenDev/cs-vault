
#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, r;
    cin >> n >> r;

    int ans = factorial(n) / (factorial(r) * factorial(n - r));

    cout << ans<<endl;

    return 0;
}