#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
const long long LIMIT = 1e18;
ll MOD = 998244353;
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string st;
    ll n;
    cin >> n;
    cin >> st;
    ll a = 0;
    ll d = 0;
    for (ll i = 0; i < st.size(); ++i)
    {
        if (st[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (a == d)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
    return 0;
}