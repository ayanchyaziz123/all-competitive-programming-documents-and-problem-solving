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
        if (n == 1)
        {
            cout << 1 << " " << 0 << endl;
        }
        else
        {
            ll c1 = n / 3;
            ll c2 = (n - c1) / 2;
            if (n % 3 == 1)
            {
                cout << c1 + 1 << " " << c2 << endl;
            }
            else
            {
                cout << c1 << " " << c2 << endl;
            }
        }
    }

    return 0;
}