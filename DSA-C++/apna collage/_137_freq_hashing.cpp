#include <bits/stdc++.h>
// #include <chrono>
// #include <algorithm>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>

int main()
{

    int n;
    cin >> n;

    // vector<int>vi;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;
    rep(i, 0, n)
    {
        freq[a[i]]++;
    }

    // map<int,int>::iterator it;
    for (auto it = freq.begin(); it != freq.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}