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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        mp[ple]++;
    }
    map<ll, ll>::iterator it;
    ll car1 = mp[4];
    ll car2 = mp[3];
    ll car3 = mp[2];
    ll car4 = mp[1];
    ll ans = car1;
    if (car2 <= car4)
    {
        car4 = car4 - car2;
        ans += car2;
        ll x = car3 / 2;
        car3 = car3 % 2;
        ans += x;
        ll y = (car3 * 2) + car4;
        ll z = y / 4;
        ans += z;
        //cout << ans << endl;
        if (y % 4 != 0)
        {
            ans += 1;
        }
        cout << ans << endl;
    }
    else
    {
        car2 = car2 - car4;
        ans += car4;
        ll x = (car3 / 2);
        if (car3 % 2 != 0)
        {
            x += 1;
        }
        ans += x + car2;
        cout << ans << endl;
    }

    return 0;
}