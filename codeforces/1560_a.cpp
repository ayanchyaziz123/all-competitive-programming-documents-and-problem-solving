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
    ll tc;
    vector<ll> vc;
    ll j = 1;
    ll cnt = 1;
    while (cnt <= 1000)
    {
        if (j % 3 != 0 && j % 10 != 3)
        {
            vc.push_back(j);
            cnt++;
        }
        j++;
    }
    //cout << "hello" << endl;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        n = n - 1;
        cout << vc[n] << endl;
    }
    return 0;
}