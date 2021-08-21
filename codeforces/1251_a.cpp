#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
const long long LIMIT = 1e18;
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
        //vector<char> vc;
        set<char> s;
        if (st.size() == 1)
        {
            cout << st << endl;
            continue;
        }
        for (ll i = 0; i < st.size(); i++)
        {
            if (st[i] == st[i + 1])
            {
                i++;
            }
            else
            {
                s.insert(st[i]);
            }
        }
        set<char>::iterator it;
        for (it = s.begin(); it != s.end(); it++)
        {
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}