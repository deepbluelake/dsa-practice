#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x)
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int floor = -1;
        int ceil = -1;

        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] <= x)
            {
                floor = nums[mid];
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        s = 0;
        e = n - 1;

        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] >= x)
            {
                ceil = nums[mid];
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        return {floor, ceil};
    }
};

int main()
{
    int numSnails, partyTime, magicClock = 240;
    cin >> numSnails >> partyTime;
    magicClock -= partyTime;

    int goblinsDefeated = 0, pixieDust = 0;

    for (int unicorn = 1; unicorn <= numSnails; unicorn++)
    {
        pixieDust += 5 * unicorn;
        if (pixieDust <= magicClock)
            goblinsDefeated++;
        else
            break;
    }

    cout << goblinsDefeated << endl;
    return 0;
}
