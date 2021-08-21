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
        string st;
        cin >> st;
        ll cnt_0 = 0;
        ll cnt_1 = 0;
        string a;
        string b;
        if (is_sorted(st.begin(), st.end()))
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = false;
        ll y;
        for (ll i = st.size() - 1; i > 0; i--)
        {
            if (st[i] == '0' && st[i - 1] == '0')
            {
                y = i - 1;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag2 = false;
        for (ll i = y; i > 0; i--)
        {
            if (st[i] == '1' && st[i - 1] == '1')
            {
                flag2 = true;
                break;
            }
        }
        if (!flag2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}