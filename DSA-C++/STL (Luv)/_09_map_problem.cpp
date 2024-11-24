/*
given n string , print unique strings in lexiogrphical order with their frequency.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++; // m[s]=m[s]+1;
    }
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
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
*/