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
    ll n;
    cin >> n;
    vector<ll> vc = {100, 20, 10, 5, 1};
    ll ans = 0;
    for (ll i = 0; i < 5; i++)
    {
        ans += n / vc[i];
        n = n % vc[i];
    }
    cout << ans << endl;

    return 0;
}