/*

*/
#include <bits/stdc++.h>
// #include<numeric> //for accumulate
using namespace std;

void show(vector<int> v)
{
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(-4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(0);
    v.push_back(-8);
    v.push_back(5);

    show(v);

    sort(v.begin(), v.end());
    show(v);
    reverse(v.begin(), v.end());
    show(v);

    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;
    int x = 0;
    cout << accumulate(v.begin(), v.end(), x) << endl; // or x=0

    return 0;
}