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
    bool flag = false;
    while (t--)
    {
        string st;
        cin >> st;
        if (st == "toFront")
        {
            ll x;
            cin >> x;
            if (!flag)
            {
                q.push_front(x);
            }
            else
            {
                q.push_back(x);
            }
        }
        else if (st == "front")
        {
            if (q.empty())
            {
                cout << "No job for Ada?" << endl;
                continue;
            }
            if (flag)
            {
                ll x = q.back();
                cout << x << endl;
                q.pop_back();
            }
            else
            {
                ll x = q.front();
                cout << x << endl;
                q.pop_front();
            }
        }
        else if (st == "back")
        {
            if (q.empty())
            {
                cout << "No job for Ada?" << endl;
                continue;
            }
            if (flag)
            {
                cout << q.front() << endl;
                q.pop_front();
            }
            else
            {
                cout << q.back() << endl;
                q.pop_back();
            }
        }
        else if (st == "push_back")
        {
            ll x;
            cin >> x;
            if (!flag)
            {
                q.push_back(x);
            }
            else
            {
                q.push_front(x);
            }
        }
        else if (st == "reverse")
        {

            if (flag)
            {
                flag = false;
            }
            else if (!flag)
                flag = true;
        }
        else
        {
            continue;
        }
    }

    return 0;
}