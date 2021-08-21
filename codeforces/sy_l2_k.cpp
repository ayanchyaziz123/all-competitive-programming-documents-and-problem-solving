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
    ll caseno = 0;
    while (tc--)
    {
        ll n, q;
        cin >> n >> q;
        vector<pair<ll, ll>> vc;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            vc.push_back(make_pair(a, b));
        }

        cout << "Case " << ++caseno <<":" << endl;
        while (q--)
        {
            ll gt;
            ll ans = 0;
            cin >> gt;

            for (auto x : vc)
            {
                if (x.first <= gt && x.second >= gt)
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}