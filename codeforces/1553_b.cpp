#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
// Ayan's Code

bool func(string s, ll x, string t)
{
    ll last = s.size() - 1;
    for (ll i = 1; i < t.size(); i++)
    {
        if (x > 0 && s[x - 1] == t[i])
        {
            x--;
        }
        else if (x < last && s[x + 1] == t[i])
        {
            x++;
        }
        else
        {
            return false;
        }
    }
    return true;
}

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
        string s;
        string t;
        cin >> s;
        cin >> t;
        vector<ll> vc;
        ll xx = 0;
        char k = t[0];
        for (auto y : s)
        {
            if (k == y)
            {
                vc.push_back(xx);
            }
            xx++;
        }

        bool flag = false;

        for (auto x : vc)
        {
            if (func(s, x, t))
            {
                flag = true;
                break;
            }
        }
        if (flag)
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