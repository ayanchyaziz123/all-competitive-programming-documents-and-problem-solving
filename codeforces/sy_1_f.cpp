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

    for (ll s = 0; s < n; s++)
    {
        ll ple;
        cin >> ple;
        vc.push_back(ple);
    }

    sort(vc.begin(), vc.end());

    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        ll f = 0;
        ll l = n - 1;
        bool exists = false;
        ll m = 0;

        while (f <= l)
        {
            m = (f + l) / 2;
            if (vc[m] == vc[i] + k)
            {
                exists = true;
                break;
            }
            else if (vc[m] > vc[i] + k)
            {
                l = m - 1;
            }
            else
            {
                f = m + 1;
            }
        }
        if (exists)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}