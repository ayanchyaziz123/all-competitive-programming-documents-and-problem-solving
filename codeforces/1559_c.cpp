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
        ll n;
        cin >> n;
        vector<ll> vc;
        for (ll i = 1; i < n; i++)
        {
            vc.push_back(i);
        }
        vector<ll> vc2;
        bool flag = false;
        for (ll i = 1; i <= n; i++)
        {
            ll ple;
            cin >> ple;
            if (ple == 0 && !flag)
            {
                if (!binary_search(vc.begin(), vc.end(), i))
                {
                    vc.push_back(i);
                }
                if (!binary_search(vc.begin(), vc.end(), n + 1))
                {
                    vc.push_back(n + 1);
                }
                flag = true;
            }
            else
            {
                if (!binary_search(vc.begin(), vc.end(), i))
                {
                    vc.push_back(i);
                }
                if (!binary_search(vc.begin(), vc.end(), n + 1))
                {
                    vc.push_back(n + 1);
                }
            }
        }
        if (vc.size() != n + 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (ll i = 0; i < vc.size(); i++)
        {
            cout << vc[i] << " ";
        }
        cout << endl;
    }
    return 0;
}