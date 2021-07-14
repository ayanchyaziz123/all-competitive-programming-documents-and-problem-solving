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
        ll x;
        bool flag = false;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == 'a')
            {
                x = i;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            int n = st.size() - 1;
            int j = 1;
            int k = 1;
            int as = 0;
            while (n != 0)
            {
                int as2 = st[x + j];
                if (as2 - as <= 0)
                {
                    int as3 = st[x - k];

                    if (as3 - as <= 0 || (x - k) < 0)
                    {
                        cout << "NO" << endl;
                        break;
                    }
                    else
                    {

                        k++;
                        as = st[x - k];
                    }
                }
                else
                {

                    j++;
                    as = st[x + j];
                }
                n--;
                if (n == 0)
                {
                    cout << "YES" << endl;
                }
            }
        }
    }

    return 0;
}