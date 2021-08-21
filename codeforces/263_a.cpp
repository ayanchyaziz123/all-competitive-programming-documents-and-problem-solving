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
    ll gt_i, gt_j;
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            ll ple;
            cin >> ple;
            if (ple == 1)
            {
                gt_i = i;
                gt_j = j;
            }
        }
    }
    cout << abs(gt_i - 2) + abs(gt_j - 2) << endl;
    return 0;
}