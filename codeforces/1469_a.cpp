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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string st;
        cin >> st;
        bool flag = false;
        stack<char> s;
        for (ll i = 0; i < st.size(); i++)
        {
            if (s.empty())
            {
                if (st[i] == '?')
                {
                    if (!flag)
                    {
                        s.push('(');
                        flag = true;
                    }
                    else
                    {
                        s.push(')');
                        flag = false;
                    }
                }
                else
                {
                    s.push(st[i]);
                }
            }
            else
            {
                if (st[i] == '?')
                {
                    if (!flag)
                    {
                        s.push('(');
                        flag = true;
                    }
                    else
                    {
                        if (s.top() == '(')
                        {
                            s.pop();
                        }
                        else
                        {
                            s.push(')');
                        }
                        flag = true;
                    }
                }
                else
                {
                    if (st[i] == ')' && s.top() == '(')
                    {
                        s.pop();
                    }
                    else
                    {
                        s.push(st[i]);
                    }
                }
            }
        }
        if (s.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}