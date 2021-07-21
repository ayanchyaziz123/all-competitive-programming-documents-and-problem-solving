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
        bool flag = false;
        ll cnt = 0;
        if (st.size() == 1 && st[0] != '1' && st[0] != '0')
        {
            cout << st << endl;
        }

        else
        {
            ll prev = 0;
            for (ll i = 0; i < st.size(); i++)
            {
                if (st[i] == '1' || st[i] == '0')
                {
                    continue;
                }
                else
                {
                    cnt++;
                    char c = st[i];
                    ll num = c - '0';
                    if (prev < num)
                    {
                        prev = num;
                    }
                    flag = true;
                }
            }
            if (flag)
            {
                cout << prev << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}