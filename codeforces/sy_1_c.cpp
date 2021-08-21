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
    stack<char> s;
    ll len = st.size();
    for (ll i = len - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            s.push(st[i]);
        }
        else
        {
            if (s.top() == st[i])
            {
                s.pop();
            }
            else
            {
                s.push(st[i]);
            }
        }
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}