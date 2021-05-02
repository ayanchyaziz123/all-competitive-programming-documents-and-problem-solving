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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        vector<ll> age;
        vector<ll> over_age;
        for (ll i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            if (ple >= 80 || ple <= 9)
            {
                over_age.push_back(ple);
            }
            else
            {
                age.push_back(ple);
            }
        }
        ll day = 0;
        ll oa = over_age.size();
        ll ag = age.size();
        ll ans1 = 0;
        ll ans2 = 0;
        if (oa % d != 0)
        {
            ans1 = oa / d + 1;
        }
        if (oa % d == 0)
        {
            ans1 = oa / d;
        }
        if (ag % d != 0)
        {
            ans2 = ag / d + 1;
        }
        if (ag % d == 0)
        {
            ans2 = ag / d;
        }
        cout << ans1 + ans2 << endl;
    }

    return 0;
}