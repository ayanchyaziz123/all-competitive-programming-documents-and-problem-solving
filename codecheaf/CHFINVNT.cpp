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
        ll n, p, k;
        cin >> n >> p >> k;
        vector<pair<ll, ll>> vc;
        for (ll i = 0; i < n; i++)
        {
            ll ple = i % k;
            vc.push_back(make_pair(ple, i));
        }
        sort(vc.begin(), vc.end());
        // for (auto x : vc)
        // {
        //     cout << x.first << " ";
        // }
        // cout << endl;
        ll day = 1;
        for (auto x : vc)
        {
            if (x.second == p)
            {
                break;
            }
            day++;
        }
        cout << day << endl;
    }
    return 0;
}