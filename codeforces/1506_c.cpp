#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
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
        string st1, st2;
        cin >> st1;
        cin >> st2;
        if (st1 == st2)
        {
            cout << 0 << endl;
            continue;
        }
        bool flag_1 = false;
        bool flag_2 = false;
        ll cnt = 0;
        ll i = 0;
        ll m = st1.size();
        ll n = st2.size();
        ll val = min(m, n);
        vector<pair<ll, ll>> vc;
        while (i < val)
        {

            if (st1[i] == st2[i])
            {
                cnt++;
            }
            else
            {
                vc.push_back(make_pair((i - cnt), i));
                cnt = 0;
            }
            i++;
        }
        for (auto x : vc)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
    return 0;
}