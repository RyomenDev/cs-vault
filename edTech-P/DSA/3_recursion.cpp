#include <bits/stdc++.h>
using namespace std;

set<vector<int>> ans;

// subsets of an array
void subsets(vector<int> &nums, vector<int> &ds, int index)
{
    if (index >= nums.size())
    {
        ans.insert(ds);

        if (ds.size() == 0)
            ans.insert(ds);
    }
    ds.push_back(nums[index]);
    subsets(nums, ds, index + 1);
    ds.pop_back();
    subsets(nums, ds, index + 1);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> ds;
    subsets(nums, ds, 0);

    return 0;
}