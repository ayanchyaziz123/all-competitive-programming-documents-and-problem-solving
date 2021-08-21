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
        map<ll, ll> mp;
        for (ll i = 0; i < 4; i++)
        {
            ll ple;
            cin >> ple;
            mp[ple]++;
        }
        //map<ll, ll>::iterator it;
        ll cnt = mp.size();
        if (cnt == 4)
        {
            cout << 2 << endl;
        }
        else if (cnt == 3)
        {
            cout << 2 << endl;
        }
        else if (cnt == 2)
        {
            bool flag = false;
            for (auto x : mp)
            {
                if (x.second == 2)
                {
                    flag = true;
                }
            }
            if (flag)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}