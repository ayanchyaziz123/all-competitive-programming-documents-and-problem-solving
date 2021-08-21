#include <bits/stdc++.h>
using namespace std;
double eps = 1e-12;
#define ll long long int
#define INF 2e18
#define max_in_ll 372036854775808
#define min_in_ll -372036854775808
#define dbg(x) cout << #x << " = " << x << ln
ll MOD = 998244353;
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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> vc;

        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            vc.push_back(make_pair(ple, i));
        }
        sort(vc.begin(), vc.end());
        ll gt = 1;
        for (ll i = 1; i < n; i++)
        {
            if (vc[i - 1].second + 1 != vc[i].second)
            {
                gt++;
            }
        }
        cout << (gt <= k ? "YES" : "NO") << endl;
    }
    return 0;
}