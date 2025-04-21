#include <bits/stdc++.h>
using namespace std;

void subsetSum(int index, int sum, vector<int> arr, vector<int> &ans)
{
    if (index == arr.size())
    {
        ans.push_back(sum);
        return;
    }

    subsetSum(index + 1, sum + arr[index], arr, ans);
    subsetSum(index + 1, sum, arr, ans);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    subsetSum(0, 0, arr, ans);

    // Print all subset sums
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
