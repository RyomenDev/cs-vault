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

    int n; // no of rows
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << "\n";
    }

    return 0;
}