/*
diff b/w ordered & unordered map--
1. inbuild implementation -> use hash instead of tree
2. time complexity
3. valid key datatype - cpmplex not allowed
    pair - no inbuilt hash table
*/

#include <bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int, string> m)
{
    cout << "size=" << m.size() << endl;
    for (auto &i : m) // O(logn)
    {
        cout << i.first << " " << i.second << "  "; // O(nlogn)
    }
    cout << endl;
}

int main()
{
    /* if key is ___  inserion time is
    int -> O(1)
    string -> s.size(string)*O(1)
    */
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "afg"});

    auto it = m.find(3);                            // returns iterator else m.end()   O(1)
    cout << it->first << " " << it->second << "  "; // O(nlogn) 

    // m.erase()  , input key and also iterator - if not present result segment error
    if(it!=m.end()){
    m.erase(it); // erases value with key 3
    }
    // m.clear(); // clears map

    printMap(m);
}