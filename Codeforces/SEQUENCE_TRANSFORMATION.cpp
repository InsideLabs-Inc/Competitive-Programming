// link to Codeforces problem : https://codeforces.com/contest/1454/problem/C
//  Runtime : 312
//  Memory : 8012

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vll vector<ll>
#define prii pair<int, int>
#define pric pair<int, char>
#define pris pair<int, string>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fo(i, a, b) for (int i = a; i < b; i++)
#define fon(i, a, b) for (int i = a; i > b; i--)
bool allsame(vector<int> vecc)
{
    int f = vecc[0];
    for (auto it : vecc)
    {
        if (f != it)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, vector<int>> m;
    fo(i, 0, n)
    {
        cin >> arr[i];
        m[arr[i]].push_back(i);
    }
    if (m.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    int mn = INT_MAX;
    for (auto x : m)
    {
        int ans = 0;
        int prev = -1;
        for (auto y : x.S)
        {
            if (y - prev == 1)
            {
                prev = y;
                continue;
            }
            else
            {
                ans++;
                prev = y;
            }
        }
        if ((n - 1) - prev > 0)
        {
            ans++;
        }
        mn = min(mn, ans);
    }
    cout << mn << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}