/*
map a data structure
stores pair of unique key and value

orderded map - keys stored in sorted order >> red black tress - self balancing tree

unordered map - not in sorted order
*/

#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m)
{
    cout << "size=" << m.size() << endl;
    for (auto &i : m) //O(logn)
    {
        cout << i.first << " " << i.second << "  ";  //O(nlogn)
    }
    cout << endl;
}

int main()
{
    map<int, string> m; // string by default empty str , int 0
    m[1] = "abc";  //O(logn) n= map current size
    m[5] = "cdc";  
    m[3] = "acd";

    m.insert({4, "afg"});
    printMap(m);
    /*
        map<int, string>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
        {
            cout << (*it).first << " " << (*it).second << "  ";
        }
        cout << endl;

        for (auto it1 = m.begin(); it1 != m.end(); it1++)
        {
            cout << it1->first << " " << it1->second << "  ";
        }
        cout << endl;
          for (auto it1 : m)
        {
            cout << it1.first << " " << it1.second << "  ";
        }
        */
}
