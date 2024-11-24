// smalles positive missing number
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};
void printVec(vector<int> &v)
{
    cout << "size=" << v.size() << endl;
    for (auto i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int missingNum(int n, int arr[], vector<int> &v)
{
    int ans = 0;
    for (auto j = 0; j < n; j++)
        v.push_back(arr[j]);
    vector<int>::iterator it1 = v.begin();
    auto it2 = v.end();
    sort(it1, it2);
    // printVec(v);
    auto i = v.begin();
    for (i; i < v.end(); i++)
    {
    auto z = v.end()-1;
    // cout << *i<<" "<<*z<< endl;
        if (*i == 0)
            break;
        else if (*i == *z)
        {
            cout << "0=0" << endl;
            goto label;
            // cout <<"if="<< *i << endl;
        }
    }
    // cout << *i << endl;
    for (i; i < v.end(); i++)
    {
    // cout <<"final0="<< *i<<" "<<ans<< endl;
        if (*(i) == ans)
            ans++;
        else{
            // cout<<"break"<<endl;
            break;  
        }
    // cout <<"final1="<< *i+1<< endl;
    }
    cout << ans << endl;
label:
    // cout << *i + 1 << endl;
    int a=8;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v; // vectors

    input(n, arr);
    missingNum(n, arr, v);

    int N;
    cin >> N;

    return 0;
}