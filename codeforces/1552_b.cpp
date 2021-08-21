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
        ll arr[n][5];
        ll ans = 0;
        bool a = false;
        ll k = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < 5; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll m = 5;
        for (ll s = 0; s < n; s++)
        {
            sort(arr[s], arr[s] + m);
        }

        while (k < n)
        {
            bool flag = false;
            for (ll i = 0; i < n; i++)
            {
                if (k != i)
                {
                    ll cnt = 0;
                    ll h = 0;
                    ll cnt2 = 0;
                    for (ll j = 0; j < 5; j++)
                    {
                        if (arr[k][j] > arr[i][j])
                        {
                            cnt2++;
                            if (h != arr[k][j])
                            {
                                cnt++;
                                h = arr[k][j];
                            }
                        }
                    }
                    if (cnt >= 3)
                    {
                        flag = true;
                    }
                    else if (cnt2 >= 3)
                    {
                        a = true;
                    }
                }
                if (flag)
                {
                    ans++;
                    break;
                }
            }

            k++;
        }
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (ans == 0)
        {
            if (a)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}