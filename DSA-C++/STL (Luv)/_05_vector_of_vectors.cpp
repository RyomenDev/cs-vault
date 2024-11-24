#include <bits/stdtr1c++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size=" << v.size() << endl;
    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // /*
    vector<vector<int>> v;
    int n;
    cin >> n;
    vector<int> temp1;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temp1.push_back(x);
    } 
    v.push_back(temp1);

    cin >> n;
    vector<int> temp2;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temp2.push_back(x);
    }
    v.push_back(temp2);

    for (auto i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    // */

/*
    vector<vector<int>> v1;
    int N;
    cin >> N;
    for (auto i = 0; i < N; i++)
    {
        int n1;
        cin >> n1;
        v1.push_back(vector<int>()); // now exist ith vector
        
        for (auto j = 0; j < n1; j++)
        {
            int x;
            cin >> x;
            v1[i].push_back(x);
        }
        
    }

    for (auto i = 0; i < v1.size(); i++)
    {
        printVec(v1[i]);
    }

    */
}