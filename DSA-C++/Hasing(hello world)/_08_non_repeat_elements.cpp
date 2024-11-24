
// geeks for geeks
// non-repeating element
// https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1?page=1&difficulty[]=0&category[]=Hash&sortBy=submissions

//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++)
            ump[arr[i]]++;

        for (int i = 0; i < n; i++)
            if (ump[arr[i]] == 1)
                return arr[i];
        // int key=arr[i];
        // auto temp=umap.find(key)
        // if(temp->second==1)
        // retuen key;
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{

    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    cout << ob.firstNonRepeating(arr, n) << endl;
    // }
}

// } Driver Code Ends