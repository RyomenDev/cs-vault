
// unordered_set and it's impplementation in hashing.
// it doesn't have duplicates key.
/*
An unordered_set is implemented using a hash table.
in this keys are hashed into indices of a hash table so that the insertion is always randomised.

All operations on the unordered_set takes constant time O(1) on average.worst case O(n).
*/

/*
set vs unordered_set ::

set -> keys are stored in unordered fashion.
unorderd_set -> keys are stored in unordered fashion.

set internaly uses RED BLACK tree while other using HASHING

set operation -> O(log N)
unordered_set operation -> O(1)
*/

// insert, size, clear, begin, end, find, erase, count.
#include <bits/stdc++.h>
using namespace std;
// #include<unordered_set>

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    (s.find(25)==s.end())?cout<<"not found"<<endl:cout<<"found"<<endl;
    (s.find(5)!=s.end())?cout<<"found"<<endl:cout<<"not found"<<endl;

    auto it=s.find(15);
    cout<<"find : "<<*it<<endl;
    cout<<"find : "<<*(s.find(5))<<endl;
    cout<<"count : "<<s.count(15)<<endl;

    s.erase(15);
    s.erase(25);
    cout<<s.size()<<endl;

    return 0;
}