#include <bits/stdc++.h>
using namespace std;
vector<int> leastPrimeFactor(int n)
{

    vector<int> spf(n + 1);
    for (int i = 0; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
            for (int j = 2 * i; j <= n; j += i)
            {

                spf[j] = min(spf[i], spf[j]);
            }
    }

    return spf;
}
int main()
{
    int n = 1000;
    vector<int> spf = leastPrimeFactor(n);
    vector<int> nums = {5, 10, 20, 40, 49, 39};
    for (int i = 0; i < nums.size(); i++)
    {
        int k = nums[i];
        while (spf[k] != k)
        {
            cout << spf[k] << " ";
            k /= spf[k];
        }
        cout << k << endl;
    }
    return 0;
}
