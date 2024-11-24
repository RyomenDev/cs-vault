/*
given N strings  and q queries.
in each query you are given a string, print frequency of that string.  
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++; // m[s]=m[s]+1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    
    // for (auto pr : m)
    // {
    //     cout << pr.first << " " << pr.second << endl;
    // }
}

/*
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
ghj
*/