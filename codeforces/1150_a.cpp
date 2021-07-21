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
        ll s;
        cin >> s;
        if (s == 1)
        {
            cout << 1 << endl;
            continue;
        }

        ll ans = 0;
        ll sm = 0;
        ll i = 1;
        while (sm < s)
        {
            sm += i;
            i += 2;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}