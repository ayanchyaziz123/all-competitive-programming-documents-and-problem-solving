#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
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
        map<char, ll> mp;
        for (ll i = 0; i < st.size(); i++)
        {
            mp[st[i]]++;
        }

        ll s = 0;
        ll t = 0;

        for (auto x : mp)
        {
            if (x.second >= 2)
            {
                s++;
            }
            else if (x.second == 1)
            {
                t++;
            }
        }
        s += t / 2;
        cout << s << endl;
    }
    return 0;
}