/*
each elemnet has stored in a key and a mapped value
no two mapped values can have same key values.
key unique
it have pair insert
*/

#include <bits/stdc++.h>
using namespace std;
// #include<map>;

int main()
{
    // map<int, string> mp1;
    // mp1.insert(pair<int, string>(1, 'abc'));
    // mp1.insert({2, 'bcd'});
    // mp1.insert({4, 'cde'});

    map<int, int> mp;
    mp.insert(pair<int, int>(1, 50));
    mp.insert({2, 55});
    mp.insert({4, 62});
    mp.insert({5, 52});

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << ":" << it->second << "  ";
    cout << endl;

    cout << mp.size() << endl;
    cout << mp.max_size() << endl;

    auto it = mp.find(4);
    cout << it->first << ":" << it->second << endl;
    // mp.erase(it);
    mp.erase(4);

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << ":" << it->second << "  ";
    cout << endl;

    cout << mp.empty() << endl; // 0 not empty
    mp.clear();
    cout << mp.empty() << endl; // 0 not empty

    return 0;
}
