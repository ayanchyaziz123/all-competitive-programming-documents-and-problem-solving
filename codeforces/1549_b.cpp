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
        string st1;
        string st2;
        cin >> st1;
        cin >> st2;
        ll cnt = 0;
        for (ll i = 0; i < st2.size(); i++)
        {
            if (st2[i] == '1')
            {
                if (st1[i] == '0')
                {
                    cnt++;
                }
                else if (i != 0 && i != n)
                {
                    if (st1[i - 1] == '1')
                    {
                        st1[i - 1] = '0';
                        cnt++;
                    }
                    else if (st1[i + 1] == '1')
                    {
                        cnt++;
                        st1[i + 1] = '0';
                    }
                }
                else
                {
                    if (i == 0)
                    {
                        if (st1[i + 1] == '1')
                        {
                            cnt++;
                            st1[i + 1] = '0';
                        }
                    }
                    else if (i == n - 1)
                    {
                        if (st1[i - 1] == '1')
                        {
                            cnt++;
                            st1[i - 1] = '0';
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}