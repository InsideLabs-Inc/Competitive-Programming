// Link to CodeChef problem: https://www.codechef.com/problems/COLOUR
// Runtime: 0.13s
// Memory: 5.2M


#include <bits/stdc++.h>
using namespace std;
#define artix long long

int main()
{
    artix t;
    cin >> t;
    while (t--)
    {
        artix r, g, b;
        cin >> r >> g >> b;
        artix fox = 0;
        if (b > 0)
        {
            fox += 1;
            b = b - 1;
        }
        if (g > 0)
        {
            fox += 1;
            g = g - 1;
        }
        if (r > 0)
        {
            fox += 1;
            r = r - 1;
        }
        
        if (r == 1 && g == 1 && b == 1)
        {
            fox += 1;
        }
        else if ((r == 0 && g == 1 && b == 1) || (r == 1 && g == 0 && b == 1) || (r == 1 && g == 1 && b == 0))
        {
            fox += 1;
        }
        else if ((r >= 2 && g == 0 && b == 1) || (r >= 2 && g == 1 && b == 0) || (r == 0 && g >= 2 && b == 1) || (r == 1 && g >= 2 && b == 0) || (r == 0 && g == 1 && b >= 2) || (r == 1 && g == 0 && b >= 2))
        {
            fox += 1;
        }
        else if ((r >= 2 && g >= 2 && b == 0) || (r == 0 && g >= 2 && b >= 2) || (r >= 2 && g == 0 && b >= 2))
        {
            fox += 1;
        }
        else if ((r >= 2 && g == 1 && b == 1) || (r == 1 && g >= 2 && b == 1) || (r == 1 && g == 1 && b >= 2))
        {
            fox += 2;
        }
        else if ((r >= 2 && g >= 2 && b == 1) || (r == 1 && g >= 2 && b >= 2) || (r >= 2 && g == 1 && b >= 2))
        {
            fox += 2;
        }
        else if (r >= 2 && g >= 2 && b >= 2)
        {
            fox += 3;
        }
        
        
        cout << fox << endl;
    }
}