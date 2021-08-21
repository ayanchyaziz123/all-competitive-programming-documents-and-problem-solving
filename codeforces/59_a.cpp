#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
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
    for (ll i = 0; i < st.size(); i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
        {
            cnt++;
        }
    }

    if (cnt > (st.size() / 2))
    {
        transform(st.begin(), st.end(), st.begin(), ::toupper);
        cout << st << endl;
    }
    else if (cnt <= (st.size() / 2))
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        cout << st << endl;
    }
    else if(cnt)
    {
        cout << st << endl;
    }

    return 0;
}