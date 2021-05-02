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
        ll n, k;
        cin >> n >> k;
        vector<ll> h;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            h.push_back(ple);
        }
        sort(h.begin(), h.end());
        vector<ll> h1;
        h1.push_back(h[n - 1]);
        sum = h[n - 1];
        ll z = -1;
        for (ll i = n - 2; i >= 0; i--)
        {
            vector<ll> h2;
            sum = sum + h[i];
            ll en = h1.size();
            ll s = 0;
            while (s < en)
            {
                int p = h1[s];
                h2.push_back(p);
                h2.push_back(h[i]);
                h2.push_back(p + h[i]);
                if (((p + h[i]) >= k) && ((sum - p - h[i]) >= k))
                {
                    z = n - i;
                    break;
                }
                if (((h[i]) >= k) && ((sum - h[i]) >= k))
                {
                    z = n - i;
                    break;
                }
                s++;
            }
            if (z != -1)
            {
                break;
            }
            h1 = h2;
        }
        cout << z << endl;
    }

    return 0;
}