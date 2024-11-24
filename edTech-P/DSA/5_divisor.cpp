#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 36;
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && i * i < n)
        {
            v.push_back(i);
            v.push_back(n / i);
        }
        else if (n % i == 0 &&i *i == n)
        {
            v.push_back(i);
        }
    }
    for(auto i : v)
        cout<<i<<" ";
    cout<<endl;
    cout<<accumulate(v.begin(), v.end(), 0)<<endl;

    return 0;
}