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
    ll row, column, n;
    cin >> row >> column >> n;
    vector<ll> vc1, vc2;
    for (ll i = 0; i < n; i++)
    {
        ll ple1, ple2;
        cin >> ple1 >> ple2;
        vc1.push_back(ple1);
        vc2.push_back(ple2);
    }

    for(ll i = 0; i < row; i++)
    {
        for(ll j = 0; j < column; j++)
        {
            
        }
    }

    return 0;
}