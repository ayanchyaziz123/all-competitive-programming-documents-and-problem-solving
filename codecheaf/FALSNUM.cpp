#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
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
        if (st[0] == '1')
        {
            cout << 1 << 0;
            for (ll i = 1; i < st.size(); i++)
            {
                cout << st[i];
            }
            cout << endl;
        }
        else
        {
            cout << 1 << st << endl;
        }
    }

    return 0;
}