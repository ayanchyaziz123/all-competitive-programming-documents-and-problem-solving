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
        ll n;
        cin >> n;
        string st;
        cin >> st;
        string st2 = st;
        sort(st2.begin(), st2.end());
        ll cst = 0;
        for (ll i = 0; i < st.size(); i++)
        {
            if (st[i] != st2[i])
            {
                cst++;
            }
        }
        cout << cst << endl;
    }
    return 0;
}