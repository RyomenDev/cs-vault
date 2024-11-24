// 1122. Relative Sort Array
// https://leetcode.com/problems/relative-sort-array/
// https://practice.geeksforgeeks.org/problems/relative-sorting4323/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]

    // Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M)
    {
        // Your code here
        vector<int> ans;
        map<int, int> map;
        for (auto it : A1)
            map[it]++;
        for (auto it : A2)
        {
            if (map[it] > 0)
            {
                // cout<<it<<" "<<map[it]<<endl;
                // for (int i = 0; i < map[it]; i++)
                //     ans.push_back(it);
                vector<int> v(map[it], it);
                ans.insert(ans.end(), v.begin(), v.end());
                map.erase(it);
            }
            // if (map.find(it) != map.end())
            // {
            //     auto temp = map.find(it);
            //     int count = temp->second;
            //     vector<int> v(count, it);
            //     ans.insert(ans.end(), v.begin(), v.end());
            //     map.erase(it);
            // }
        }
        for (auto x : map)
        {
            // int ele = x.first;
            // int count = x.second;
            // vector<int> v(count, ele);
            vector<int> v(x.second, x.first);
            ans.insert(ans.end(), v.begin(), v.end());
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(int argc, char *argv[])
{

    // int t;

    // cin >> t;

    // while(t--){

    int n, m;
    cin >> n >> m;

    vector<int> a1(n);
    vector<int> a2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    Solution ob;
    a1 = ob.sortA1ByA2(a1, n, a2, m);

    for (int i = 0; i < n; i++)
        cout << a1[i] << " ";

    cout << endl;

    // }
    return 0;
}

// } Driver Code Ends

/*

class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> ans;
        map<int, int> map;
        for (auto it : arr1)
            map[it]++;
        for (auto it : arr2)
        {
            if (map[it] > 0)
            {
                 // cout<<it<<" "<<map[it]<<endl;
                for (int i = 0; i < map[it]; i++)
                    ans.push_back(it);
                // vector<int> v(map[it], it);
                // ans.insert(ans.end(), v.begin(), v.end());
                map.erase(it);
            }
            // if (map.find(it) != map.end())
            // {
            //     auto temp = map.find(it);
            //     int count = temp->second;
            //     vector<int> v(count, it);
            //     ans.insert(ans.end(), v.begin(), v.end());
            //     map.erase(it);
            // }
        }
        for (auto x : map)
        {
            // int ele = x.first;
            // int count = x.second;
            // vector<int> v(count, ele);
            vector<int> v(x.second, x.first);
            ans.insert(ans.end(), v.begin(), v.end());
        }
        return ans;
    }
};
*/