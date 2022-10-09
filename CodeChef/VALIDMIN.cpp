// Link to CodeChef problem: https://www.codechef.com/problems/VALIDMIN
// Runtime: 0.01s
// Memory: 5.0M

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if ( min(a,b) == min (b,c) && min (b,c) == min (c,a))
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }

    }
}    