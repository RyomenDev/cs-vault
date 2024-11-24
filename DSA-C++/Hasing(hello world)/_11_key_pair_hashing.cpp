//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        // code here
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++)
            ump[arr[i]]++;

        // for (auto it : ump)
        //     cout << it.first << ":" << it.second << "; ";
        // cout << endl;

        for (int i = 0; i < n; i++)
        {
            int toFind = x - arr[i];
            if (toFind != arr[i])
            {
                if (ump.find(toFind) != ump.end())
                    return true;
            }
            else if (ump[toFind] > 1)
                return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.hasArrayTwoCandidates(arr, n, x);
    cout << (ans ? "Yes\n" : "No\n");
    // }
    return 0;
}

// } Driver Code Ends