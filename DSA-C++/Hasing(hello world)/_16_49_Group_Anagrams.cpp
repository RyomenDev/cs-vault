// 49. Group Anagrams
// https://leetcode.com/problems/group-anagrams/

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;
        for (auto x : strs)
        {
            string temp = x; // temp =key  , x=value
            sort(temp.begin(), temp.end());
            umap[temp].push_back(x);
        }

        for (auto x : umap)
        {
            vector<string> temp = x.second;
            ans.push_back(temp);
        }
        return ans;
    }
};