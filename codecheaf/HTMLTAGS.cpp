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
        ll n = st.size() - 1;
        bool flag = false;
        if (st[0] == '<' && st[1] == '/' && st[n] == '>')
        {

            for (ll i = 2; i < n; i++)
            {
                if ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= '0' && st[i] <= '9'))
                {

                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {

                cout << "Success" << endl;
            }
            else
            {
                cout << "Error" << endl;
            }
        }
        else
        {
            cout << "Error" << endl;
        }
    }

    return 0;
}