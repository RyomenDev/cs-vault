/*
vector is an dynamic array(also container)
it has an ability to resize itself
vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators
it internally uses a Array
*/
#include <bits/stdc++.h>
using namespace std;
// #include<vector>

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(10);
    v.push_back(7);
    
    // cout<<*(v.begin()+2)<<endl;
    v.pop_back(); // element not removed ,size of vector reduced  (3 10 7)
    // sort(v.begin(),v.begin()+3);
    

    for (int i = 0; i < 3; i++)
        cout << v[i] << " ";
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; //(3 10 )
    cout << endl;

    // vector<int>:: iterator it;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " "; //(3 10 )
    cout << endl;

    return 0;
}
