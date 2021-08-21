#include <bits/stdc++.h>
using namespace std;
double eps = 1e-12;
#define ll long long int
#define INF 2e18
#define max_in_ll 372036854775808
#define min_in_ll -372036854775808
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
    if (st[0] >= 'a' && st[0] <= 'z')
    {
        // cout << "hello" << endl;
        ll i = 1;
        ll cnt = 0;
        bool flag = false;
        while (i < st.size())
        {
            if (st[i] >= 'A' && st[i] <= 'Z')
            {
                flag = true;
            }
            else
            {
                cnt++;
            }
            i++;
        }
        if (cnt == 0)
        {
            // cout << "hello2" << endl;
            char x = st[0] - 32;
            cout << x;
            for (ll i = 1; i < st.size(); i++)
            {
                char y = st[i] + 32;
                cout << y;
            }
            cout << endl;
        }
        else
        {
            cout << st << endl;
        }
    }
    else
    {

        ll i = 1;
        bool flag = false;
        ll cnt = 0;
        while (i < st.size())
        {
            if (st[i] >= 'a' && st[i] <= 'z')
            {
                cnt++;
            }
            i++;
        }
    
        if (cnt == 0)
        {
            for (ll i = 0; i < st.size(); i++)
            {
                char x = st[i] + 32;
                cout << x;
            }
        }
        else
        {
            cout << st << endl;
        }
        cout << endl;
    }
    return 0;
}