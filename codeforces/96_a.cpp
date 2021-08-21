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
    string st;
    cin >> st;
    ll cnt = 0;
    for (ll i = 0; i < st.size() - 1; i++)
    {
        cnt = 0;
        while (i < st.size() - 1)
        {
            if (st[i] == st[i + 1])
            {
                i++;
                cnt++;
            }
            else
            {
                break;
            }
        }
        if (cnt + 1 >= 7)
        {
            break;
        }
    }
    if (cnt + 1 >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}