// First Repeating Element
// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1?page=1&difficulty[]=0&category[]=Hash&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        // code here
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++)
            ump[arr[i]]++;

        // for (auto it : ump)
        //     cout << it.first << ":" << it.second << "; ";
        // cout << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     int key = arr[i];
        //     auto temp = ump.find(key);
        //     cout << i << "=" << temp->first << ":" << temp->second << "; ";
        // }
        // cout << endl;
        for (int i = 0; i < n; i++)
            if (ump[arr[i]] > 1)
                return i + 1;
        return -1;
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

    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    Solution ob;
    cout << ob.firstRepeated(arr, n) << "\n";
    // }

    return 0;
}

// } Driver Code Ends