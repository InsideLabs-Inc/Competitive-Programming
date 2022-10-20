#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
// MAIN FUNCTION
int findDuplicate(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    int ans;
    for (auto it : m)
    {
        if (it.second > 1)
        {
            ans = it.first;
            break;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    // SAMPLE TESTCASES
    vector<int> v = {1, 3, 4, 2, 2};
    cout << findDuplicate(v) << endl;
    return 0;
}