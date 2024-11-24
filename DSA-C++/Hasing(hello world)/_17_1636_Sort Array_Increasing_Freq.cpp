// 1636. Sort Array by Increasing Frequency
// https://leetcode.com/problems/sort-array-by-increasing-frequency/

class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> umap;
        for (auto it : nums)
            umap[it]++;

        sort(nums.begin(), nums.end(), [&](int a, int b)
                                           { return umap[a] != umap[b]
                                           ? umap[a] < umap[b]
                                           : a > b;});

        return nums;
    }
};

/*
lambda function::

[&] (int a,int b){return expression}
[&] (parameters){return expression}

1) if two numbers have different freq,the one with smaller freq goes first.
2_ otherwise, the onw that is lexicographically greater goes first.
*/