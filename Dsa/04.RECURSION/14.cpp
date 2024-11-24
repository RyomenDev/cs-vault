#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0 || n == 1)
        return n;
    int size = 0;
    int tails[n];

    for (int x : nums)
    {
        int i = 0, j = size;
        while (i != j)
        {
            int m = (i + j) / 2;
            if (tails[m] < x)
                i = m + 1;
            else
                j = m;
        }
        tails[i] = x;
        cout <<i<<":"<< x << " ";
        if (i == size)
            ++size;
    }
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << tails[i] << " ";
    cout << endl;
    return size;
}

// std::vector<int> tails(nums.size(), 0);

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << lengthOfLIS(nums) << endl;
    return 0;
}