#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int s = 0; 
        int n = nums.size();
        int e = n - 1;
        int ans = INT_MAX;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[s] <= nums[e]) 
            {
                if (nums[s] < ans)
                {
                    ans = nums[s];
                }
            }
            if (nums[s] <= nums[mid])
            {
                if (nums[s] <= ans)
                {
                    ans = nums[s];
                }
                s = mid + 1;
            }
            else
            {
                if (nums[mid] < ans)
                {
                    ans = nums[mid];
                }
                e = mid - 1;
            }
        }
        return ans;
    }
};



int main()
{
    return 0;
}
