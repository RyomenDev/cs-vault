#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int count = 0;
        while (x > 0)
        {
            auto it_b = nums.begin();
            auto it_e = nums.end();
            if ((x - *it_b) > 0)
            {
                x = x - (*it_b);
            }
            else if ((x - *it_e) > 0)
            {
                x = x - (*it_e);
            }
            else
            {
                // ....
            }
            count++;
            if (x == 0)
                return count;
        }
        return -1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
    }
    return 0;
}