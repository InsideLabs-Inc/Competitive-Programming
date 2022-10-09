// Link to CodeChef problem: https://www.codechef.com/problems/COLOUR
// Runtime: 0.10s
// Memory: 7.0M

#include<bits/stdc++.h>
using namespace std;
#define lenox long long

int main()
{
    lenox t;
    cin >> t;
    while (t--)
    {
        lenox n,m;
        cin >> n >> m;
        lenox a[n];
        lenox b[n]={0};
        lenox sum=0;
        for (lenox i=0;i<n;i++)
        {
            cin >> a[i];
        } 
        for (lenox i=0;i<n;i++)   
        {
            if (max((a[i] - 1), m - a[i]) == (a[i] - 1))
            {
                b[i]=1;
            }
            else
            {
                b[i]=m;
            }     
        }
        for (lenox i=0;i<n;i++)
        {
            sum += abs(a[i]-b[i]);
        }
        cout << sum << endl;
        

    }
    return 0;
}