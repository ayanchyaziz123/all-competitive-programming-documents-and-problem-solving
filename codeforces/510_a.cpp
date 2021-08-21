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

    ll r, c;
    cin >> r >> c;
    bool flag = false;

    for (ll i = 0; i < r; i++)
    {
        ll cnt = 0;

        for (ll j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                cout << '#';
            }
            else if ((i % 2 != 0) && (flag == false) && (j == c - 1) && (cnt == 0))
            {
                cout << '#';
                flag = true;
                cnt = 1;
            }
            else if ((i % 2 != 0) && (flag == true) && (j == 0) && (cnt == 0))
            {
                cout << '#';
                flag = false;
                cnt = 1;
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}