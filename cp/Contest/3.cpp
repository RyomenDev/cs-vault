#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double 
#define endl "\n"
#define For(a, b, c) for (auto(a) = (b); (a) < (c); ++(a))


int Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int>v;
    unordered_map<int, int>mp;
    int maX = 0;
    // for (int i = 0;i < n;i++) {
    For(i, 0, n) {
        int temp;
        cin >> temp;
        v.push_back(temp);
        mp[temp]++;
        maX = max(maX, mp[temp]);
    }
    return n - maX;
}

int32_t main()
{

    int tt = 1;
    cin >> tt;
    while (tt--) {
        cout << Vatsh() << endl;
    }
    return 0;
}