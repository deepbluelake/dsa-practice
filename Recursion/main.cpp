#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A[100][4];
    int i, j, n, total = 0, index, temp;
    float avg_wt, avg_tat;

    cout << "Enter number of process: ";
    cin >> n;

    cout << "Enter Burst Time:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> A[i][1];
        A[i][0] = i + 1;
    }

    for (i = 0; i < n; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
            if (A[j][1] < A[index][1])
                index = j;
        temp = A[i][1];
        A[i][1] = A[index][1];
        A[index][1] = temp;

        temp = A[i][0];
        A[i][0] = A[index][0];
        A[index][0] = temp;
    }

    A[0][2] = 0;

    for (i = 1; i < n; i++)
    {
        A[i][2] = 0;
        for (j = 0; j < i; j++)
            A[i][2] += A[j][1];
        total += A[i][2];
    }

    avg_wt = (float)total / n;
    total = 0;
    cout << "P	 BT	 WT	 TAT" << endl;

    for (i = 0; i < n; i++)
    {
        A[i][3] = A[i][1] + A[i][2];
        total += A[i][3];
        cout << "P" << A[i][0] << "	 " << A[i][1] << "	 " << A[i][2] << "	 " << A[i][3] << endl;
    }

    avg_tat = (float)total / n;
    cout << "Average Waiting Time= " << avg_wt << endl;
    cout << "Average Turnaround Time= " << avg_tat << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// void subsetSum(int index, int sum, vector<int> arr, vector<int> &ans)
// {
//     if (index == arr.size())
//     {
//         ans.push_back(sum);
//         return;
//     }

//     subsetSum(index + 1, sum + arr[index], arr, ans);
//     subsetSum(index + 1, sum, arr, ans);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<int> ans;
//     subsetSum(0, 0, arr, ans);

//     // Print all subset sums
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }