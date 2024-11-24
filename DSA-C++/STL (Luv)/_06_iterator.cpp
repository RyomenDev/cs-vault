/*
iterators-- points element of conatiner

1st -- .begin()
next to last -- .end()
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7};
    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    // cout<<*it+2<<endl;
    // cout<<*(it+4)<<endl;
    it = it + 1;
    /*
    it+1  : move to next location
    it++  : moves to next iterator
    */
    for (it; it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // iterators point to pairs
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};

    //  vector<pair<int,int>>:: iterator it1; //or auto

    for (auto it1 = v_p.begin(); it1 != v_p.end(); it1++)
    {
        cout << (*it1).first << " " << (*it1).second << "   ";
    }
    cout << endl;
    for (auto it1 = v_p.begin(); it1 != v_p.end(); it1++)
    {
        cout << it1->first << " " << it1->second << "   ";
    }
    cout << endl;
    
}