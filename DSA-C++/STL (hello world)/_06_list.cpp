/*
lists are sequence containers that allow non-contiguous memory allocation
it iterally uses a doubly linked list
easy to insert in b/w
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    l1.push_back(5);
    l1.push_back(-3);
    l1.push_back(7);
    l1.push_back(9);
    l1.push_back(2);

    l1.push_front(-4);
    l1.pop_back();
    l1.pop_front();
    // l1.insert(l1.begin() + 1, -5);

    // list<int>::iterator it;
    for (auto it = l1.begin(); it != l1.end(); it++)
        cout << *it << " ";
    cout << endl;

    l1.erase(l1.begin());
    for (auto it = l1.begin(); it != l1.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "front : " << l1.front() << endl;
    cout << "end : " << l1.back() << endl;

    l1.clear(); 
    cout<<"clear : "<<l1.empty()<<endl; // 1 true

    return 0;
}