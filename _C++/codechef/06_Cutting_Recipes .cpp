#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[0] < a[i])
            {
                a[0] = a[i];
            }
            max = a[0];
        }
        for (int i = max; i > 1; i--)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % i == 0)
                {
                    count++;
                }
                if (count == n)
                {
                    max = i;
                    goto label;
                }
            }
        }

    label:
        for (int i = 0; i < n; i++)
        {
            cout << a[i] / max << " ";
        }
        cout << "\n";
    }
    return 0;
}