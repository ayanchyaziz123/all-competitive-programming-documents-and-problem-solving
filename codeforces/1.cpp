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
    vector<ll> vc = {1, 1, 2, 2, 1, 2, 3, 4, 5, 5, 8};
    ll m = unique(vc.begin(), vc.end()) - vc.begin();
    cout << m << endl;

    return 0;
}