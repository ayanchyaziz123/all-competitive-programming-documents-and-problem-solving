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
    ll n, k;
    cin >> n >> k;
    vector<ll> vc;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        vc.push_back(ple);
    }

    cout << endl;
    ll i = 0;
    bool end = false;
    while (!end)
    {
        map<ll, ll> mp;
        for (ll j = i; j < k + i; j++)
        {
            if (j == n - 1)
            {
                mp[vc[j]]++;
                end = true;
                break;
            }
            mp[vc[j]]++;
        }

        bool flag = false;
        ll com = -372036854775808;
        ll ans = 0;
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                if (com < x.first)
                {
                    com = x.first;
                    ans = x.first;
                    flag = true;
                }
            }
        }
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "Nothing" << endl;
        }
        i++;
    }
    return 0;
}