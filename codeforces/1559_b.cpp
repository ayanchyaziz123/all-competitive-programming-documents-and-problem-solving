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
        string st;
        cin >> n;
        cin >> st;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (st[i] == '?')
            {
                cnt++;
            }
        }
        if (n == 1 && st[0] == '?')
        {
            cout << 'B' << endl;
            continue;
        }
        if (cnt == 0)
        {
            cout << st << endl;
            continue;
        }
        if (cnt == n)
        {
            for (ll i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    cout << 'B';
                }
                else
                {
                    cout << 'R';
                }
            }
            cout << endl;
            continue;
        }
        ll i = 0;
        while (i < n)
        {
            if (st[i] == '?')
            {
                if (i - 1 >= 0)
                {
                    if (st[i - 1] == 'B')
                    {
                        st[i] = 'R';
                    }
                    else if (st[i - 1] == 'R')
                    {
                        st[i] = 'B';
                    }
                }
            }
            i++;
        }
        //cout << st << endl;
        ll j = n - 1;
        //cout << j << endl;
        while (j >= 0)
        {
            if (st[j] == '?')
            {
                if (j + 1 < n)
                {
                    if (st[j + 1] == 'B')
                    {
                        st[j] = 'R';
                    }
                    else if (st[j + 1] == 'R')
                    {
                        st[j] = 'B';
                    }
                }
            }
            j--;
        }
        cout << st << endl;
    }
    return 0;
}