
/*
uordered_map::
•stores key value pair.
•uses hashing internally.
•keys are stored in ordered way
• pair of <key,value>.

map vs unordered_map ::

map -> keys are stored in unordered fashion.
unorderd_map -> keys are stored in unordered fashion.

map internaly uses RED BLACK tree while other using HASHING

map operation -> O(log N)
unordered_map operation -> O(1)
*/

// insert, size, clear, begin, end, find, erase, count.
#include <bits/stdc++.h>
using namespace std;
// #include<unordered_map>

int main()
{
    unordered_map<string, int> umap;
    umap["abc"] = 44;
    umap["gfg"] = 56;
    umap["leet"] = 32;

    for (auto it : umap)
        cout << it.first << " " << it.second << endl;

    auto it = umap.find("gfg");
    it != umap.end() ? (cout << "found : " << it->first << "=" << it->second << endl) : cout << "not found" << endl;

    umap.insert(make_pair("mob", 100));
    umap.insert(make_pair("cdc", 45));
    umap.erase("gfg");

    for (auto it = umap.begin(); it != umap.end(); it++)
        cout << it->first << " " << it->second << endl;

    cout << umap.size() << endl;

    int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
    unordered_map<int, int> ump;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        ump[key]++; // key is inserted and value corr to it incremented , inital value =0  
    }
    for (auto it : ump)
        cout << it.first << ":" << it.second << "; ";
    cout << endl;

    return 0;
}