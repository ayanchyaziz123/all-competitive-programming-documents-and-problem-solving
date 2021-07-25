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
    string st;
    cin >> st;
    bool flag = true;
    bool flag2 = false;
    for (ll i = 0; i < st.size(); ++i)
    {
        for (ll j = 0; j < st.size(); ++j)
        {

            if (i != j && st[i] == st[j])
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
        }
        if (flag)
        {
            flag2 = true;
            cout << st[i];
        }
    }
    cout << endl;

    if (!flag2)
    {
        ll n = st.size() - 1;
        cout << st[n] << endl;
    }
    cout << endl;

    return 0;
}