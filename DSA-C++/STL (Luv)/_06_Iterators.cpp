#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7};

    for (int value : v)
    { // ranged based loops   , copy in value
        cout << value << " ";
    }
    cout << endl;

    for (int &value : v)
    { // ranged based loops   , reference in value
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    for (pair<int, int> value : v_p)
    { // ranged based loops   , copy in value
        cout << value.first << " " << value.second << "  ";
    }
    cout << endl;

    for (auto value : v_p)
    { // ranged based loops   , copy in value
        cout << value.first << " " << value.second << "  ";
    }
    cout << endl;
}