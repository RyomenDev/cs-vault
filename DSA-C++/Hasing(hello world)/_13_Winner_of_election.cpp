
// Codeforces.com/problemset?order=BY_RATING_ASC
//{ Driver Code Starts

#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int> umap;
        for (int i = 0; i < n; i++)
            umap[arr[i]]++;

        string name = "";
        int max_vote = 0;
        for (auto it = umap.begin(); it != umap.end(); it++)
        {
            if (it->second > max_vote)
            {
                max_vote = it->second;
                name = it->first;
            }
            else if (it->second == max_vote)
            {
                if (name > it->first) // new string smaller
                {
                    max_vote = it->second;
                    name = it->first;
                }
            }
        }
        vector<string> ans;
        ans.push_back(name);
        string temp = to_string(max_vote);
        ans.push_back(temp);

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    // int t;
    // cin>>t;
    
    // for(int i=0;i<t;i++)
    // {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    // }
    return 0;
}

// } Driver Code Ends

// 13
// john johnny jackie johnny john jackie jamie jamie john johnny jamie johnny john