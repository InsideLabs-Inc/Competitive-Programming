// https://www.codechef.com/START61C/problems/MINLCS
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string s, string s1, int n)
{
    map<char, ll> f, fa;
    for (auto u : s)
    {
        f[u]++;
    }
    for (auto u : s1)
    {
        fa[u]++;
    }
    ll mn = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (f[s[i]] > 0 && fa[s[i]] > 0)
        {
            ll a = min(f[s[i]], fa[s[i]]);
            mn = max(mn, a);
        }
    }
    if (mn == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << mn << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s1;
        cin >> s >> s1;

        solve(s, s1, n);
    }
    return 0;
}