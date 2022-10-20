// https://codeforces.com/contest/1744/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> even;
    vector<ll> odd;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll inp;
        cin >> inp;
        if (inp % 2 == 0)
        {
            even.push_back(inp);
        }
        else
        {
            odd.push_back(inp);
        }
        ans += inp;
    }
    ll e = even.size();
    ll o = odd.size();
    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x == 0 and y % 2 == 0)
        {
            ans += (y * e);
        }
        else if (x == 0 and y % 2 == 1)
        {
            ans += (y * e);
            e = 0;
            o = n;
        }
        else if (x == 1 and y % 2 == 0)
        {
            ans += (y * o);
        }
        else if (x == 1 and y % 2 == 1)
        {
            ans += (y * o);
            e = n;
            o = 0;
        }
        cout << ans << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}