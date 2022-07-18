#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, z, z1 = 0, z2 = 0;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        z = arr[0];
        for (int i = 1; i < n; ++i)
        {
            if (z < arr[i])
            {
                z = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (z1 < arr[i] + z + ((z - arr[i]) % m))
            {
                z1 = arr[i] + z + (z - arr[i]) % m;
            }

            int y = m - (((-1) * (arr[i]) - z) % m);
            z2 = arr[i] + z + y;
            if (z1 < z2)
            {
                z1 = z2;
            }
        }
        cout << z1 << endl;
    }
    return 0;
}