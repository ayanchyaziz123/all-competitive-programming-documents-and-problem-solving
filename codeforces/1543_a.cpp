#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        ll ex;
        ll mv;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            ll mx = max(a, b);
            ll mn = min(a, b);
            ex = mx - mn;
            if (mn % ex == 0)
            {
                mv = 0;
            }
            else
            {
                mv = min(ex - mn % ex, mn % ex);
            }
            cout << ex << " " << mv << endl;
        }
    }
    return 0;
}