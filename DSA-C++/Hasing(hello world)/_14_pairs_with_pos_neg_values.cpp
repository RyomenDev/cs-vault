
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> PosNegPair(int a[], int n)
    {
        vector<int> neg;
        vector<int> ans;
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
                neg.push_back(a[i]);
            else
                map[a[i]]++;
        }
        // for (int i = 0; i < neg.size(); i++)
        //     cout << neg[i] << " ";
        // cout << endl;

        //  for (auto it = map.begin(); it != map.end(); it++)
        //     cout << it->first << " " << it->second << endl;

        sort(neg.begin(), neg.end());
        for (int i = 0; i < neg.size(); i++)
        {
            // bool i1 = map.find(-1*neg[i]) != map.end();
            // cout << i1 << " " << -1 * neg[i] << endl;

            // if (map.find(-1 * neg[i]) != map.end() && map[-1*neg[i]]>0)
            if (map[-1 * neg[i]] > 0)
            {
                ans.push_back(-1 * neg[i]);
                ans.push_back(-1 * neg[i]);
                map[-1 * neg[i]]--;
                // cout << "deleted:" << -1 * neg[i] << endl;
            }
        }
        // for (auto it = map.begin(); it != map.end(); it++)
        //     cout << it->first << " " << it->second << endl;
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = -1 * ans[i];
            i++;
        }
        return ans;
        // for (int i = 0; i < ans.size(); i++)
        //     cout<<ans[i]<<" ";
        // cout<<endl;
    }
};

//{ Driver Code Starts.
int main()
{
    // int t;
    // cin >> t;
    // while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Solution obj;
    vector<int> v = obj.PosNegPair(a, n);

    if (v.size() == 0)
        cout << "0";

    for (auto it : v)
        cout << it << " ";
    cout << endl;
    // }
    return 0;
}
// } Driver Code Ends