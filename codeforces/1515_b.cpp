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
        if (n == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            ll ans = 2;
            while (true)
            {
                ans = ans * 2;
                if (ans == n)
                {
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
                if (ans > n)
                {
                    break;
                }
            }
            if (!flag)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}