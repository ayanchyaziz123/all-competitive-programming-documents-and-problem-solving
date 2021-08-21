#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
// Ayan's Code
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
        ll n;
        cin >> n;
        ll ans1;
        ll ans2;
        if (n % 2 != 0)
        {
            ans1 = 2;
            ans2 = n - 1;
        }
        else
        {
            ans1 = 2;
            ans2 = n;
        }
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}