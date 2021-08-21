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
        map<ll, ll> mp;
        vector<ll> vc;
        ll mn_ind = 0;
        ll mn = 372036854775808;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            vc.push_back(ple);
            mn = min(ple, mn);
        }

        ll cnt;
        ll ans = 0;
        ll flag = false;
        for (auto x : vc)
        {
            if (x == mn)
            {
                continue;
            }
            cnt = x % (x - mn);
            if (cnt == mn)
            {
                ans++;
            }
            else
            {
                mn = 0;
                flag = true;
                ans = 0;
                break;
            }
        }
        if (flag)
        {
            for (auto x : vc)
            {
                if (x != 0)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}