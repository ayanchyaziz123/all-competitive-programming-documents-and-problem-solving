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
    vector<ll> vc = {1, 2, 5, 10, 25};
    auto x = lower_bound(vc.begin(), vc.end(), 0) - vc.begin();
   // vector<ll>::iterator it;
    auto it = upper_bound(vc.begin(), vc.end(), 5) - vc.begin();
    cout << x << " " << it << endl;

    return 0;
}