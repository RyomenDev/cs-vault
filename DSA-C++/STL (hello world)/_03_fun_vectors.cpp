
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.assign(5, 2); // 2 2 2 2 2
    v.insert(v.begin(), -3);
    v.insert(v.begin() + 3, -5); // insertbefore the address

    v.erase(v.begin() + 1);

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " "; //(3 10 )
    cout << endl;

    cout << v.empty() << endl; // 0 not empty
    cout << "max vector storage : " << v.max_size() << endl;

    vector<int> v1, v2;
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(3);
    v2.push_back(6);
    v2.push_back(9);

    v2.reserve();

    v1.swap(v2); // swapped

    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " "; //(3 10 )
    cout << endl;
    for (auto it = v2.begin(); it != v2.end(); it++)
        cout << *it << " "; //(3 10 )
    cout << endl;

    v1.clear();
    v2.clear();

    for (auto it = v2.begin(); it != v2.end(); it++)
        cout << *it << " "; //(3 10 )
    cout << endl;

    return 0;
}
