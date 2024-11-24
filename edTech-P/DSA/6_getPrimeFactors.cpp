#include <bits/stdc++.h>
using namespace std;

vector<int> getPrimeFactors(int n)
{
    vector<int> prime_factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.emplace_back(i);
            n /= i;
        }
    }
    if (n > 1)
        prime_factors.emplace_back(n);
    return prime_factors;
}

int main()
{
    int n = 24;
    vector<int> v = getPrimeFactors(n);

    map<int, int> mp;
    for (auto i : v)
        mp[i]++;

    // number of divisors and sum of divisors
    int ans = 1, sum = 1;
    for (auto i : mp)
    {
        ans *= (i.second + 1);
        sum = sum * ((pow(i.first, i.second + 1) - 1) / (i.first - 1));
        cout<<sum<<endl;
    }
    cout << ans << " " << sum << endl;

    return 0;
}