// 791. Custom Sort String
// https://leetcode.com/problems/custom-sort-string/

class Solution
{
public:
    string customSortString(string order, string s)
    {
        string ans = "";
        map<char, int> map;
        for (auto it : s)
            map[it]++;

        for (auto x : order)
        {
            // if (map.find(x) != map.end())
            // {
            //     auto temp_ = map.find(x);
            //     int count = temp_->second;
            //     string temp(count, x);
            // }
            string temp(map[x], x);
            ans += temp;
            map.erase(x);
        }
        for (auto x : map)
        {
            string temp(x.second, x.first);
            ans += temp;
            map.erase(x);
        }
        retrun ans;
    }
};