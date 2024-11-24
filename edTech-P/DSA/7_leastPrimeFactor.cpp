#include <bits/stdc++.h>
using namespace std;

// find number of divisors of a number in a vector
vector<vector<int>> leastPrimeFactor(vector<int> v)
{
    // code here
    int n = *max_element(v.begin(), v.end());
    vector<vector<int>> prime(n + 1); //, vector<int>(1,0)
    prime[0] = {0};
    prime[1] = {1};
    for (auto i : prime)
        cout << i.size() << " ";
    cout << endl;

    for (int i = 2; i * i <= n; i++)
    {
        if (!prime[i].size())
        {
            cout << i << " " << prime[i].size() << endl;
            for (int j = i * i; j <= n; j += i)
                prime[j].push_back(i);
        }
    }
    // vector<vector<int>> ans;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (auto j : prime[v[i]])
    //         ans[i].emplace_back(j);
    // }

    // for (auto i : ans)
    // {
    //     for (auto j : i)
    //         cout << j << " ";
    //     cout << endl;
    // }
    for (auto i : prime)
        cout << i.size() << " ";
    cout << endl;
    for (auto i : prime)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return {{1},{1}};
}
int main()
{
    vector<int> v = {2, 6, 12, 14};
    cout << "Ans" << endl;
    vector<vector<int>> ans = leastPrimeFactor(v);
    // for (auto i : ans)
    // {
    //     for (auto j : i)
    //         cout << j << " ";
    //     cout << endl;
    // }
    return 0;
}