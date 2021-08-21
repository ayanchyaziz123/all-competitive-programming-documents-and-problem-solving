#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
const long long LIMIT = 1e18;
ll MOD = 998244353;
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    vector<ll> vc1;
    vector<ll> vc2;
    ll sum1 = 0;
    ll sum2 = 0;
    ll mx = -MAX_LL;
    for (ll i = 0; i < n; ++i)
    {
        ll ple1, ple2;
        cin >> ple1 >> ple2;
        sum1 += ple1;
        sum2 += ple2;
        mx = max(mx, (sum2 - sum1));
    }
    cout << mx << endl;
    return 0;
}