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
    ll t;
    cin >> t;
    deque<ll> q;
    while (t--)
    {
        string st;
        cin >> st;
        if (st == "toFront")
        {
            ll x;
            cin >> x;
            q.push_front(x);
        }
        else if (st == "front")
        {
            if (q.empty())
            {
                cout << "No job for Ada?" << endl;
                continue;
            }
            ll x = q.front();
            cout << x << endl;
            q.pop_front();
        }
        else if (st == "back")
        {
            if (q.empty())
            {
                cout << "No job for Ada?" << endl;
                continue;
            }
            ll x = q.back();
            cout << x << endl;
            q.pop_back();
        }
        else if (st == "push_back")
        {
            ll x;
            cin >> x;
            q.push_back(x);
        }
        else if (st == "reverse")
        {
            reverse(q.begin(), q.end());
        }
        else
        {
            continue;
        }
    }

    return 0;
}